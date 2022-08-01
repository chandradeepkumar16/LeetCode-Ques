class Solution {
public:
    
    bool check(vector<int> base , vector<int> newbox){
        if(newbox[0]<=base[0] && newbox[1]<=base[1] && newbox[2]<=base[2]){
            return true;
        }else{
            return false;
        }
    }
    
    
    int solve( int n , vector<vector<int>>&cuboids , int curr , int prev , vector<vector<int>>&dp){
        
        if(curr==n) return 0;
        
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }
        
        int incl =0;
        if(prev==-1 || check(cuboids[curr] , cuboids[prev]) ){
            incl+= cuboids[curr][2] + solve( n , cuboids , curr+1 , curr , dp);
        }
        int excl = 0+ solve( n , cuboids , curr+1 , prev , dp);
        
        return dp[curr][prev+1] = max(incl , excl);
        
    }
    
    
    int maxHeight(vector<vector<int>>& cuboids) {
        
        for(auto &i: cuboids){
            sort(i.begin() , i.end());
        }
        
        sort(cuboids.begin() , cuboids.end());
        
        vector<vector<int>> dp(cuboids.size() , vector<int> ( cuboids.size()+1 ,-1));
        return solve( cuboids.size() , cuboids , 0 , -1 , dp);
        
    }
};