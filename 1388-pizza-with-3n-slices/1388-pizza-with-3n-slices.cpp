class Solution {
public:
    
    int solve(int index , int endindex , vector<int>&slices , int k , vector<vector<int>>&dp){
        
        if(k==0 || index>endindex) return 0;
        
        if(dp[index][k]!=-1){
            return dp[index][k];
        }
        
        int incl = slices[index]+ solve(index+2 , endindex , slices , k-1 ,dp);
        int excl = 0 + solve(index+1 , endindex , slices , k,dp);
        
        dp[index][k]=max(incl ,excl);
        return dp[index][k];
        
    }
    
    
    int maxSizeSlices(vector<int>& slices) {
        
        int k=slices.size()/3;
        
        vector<vector<int>> dp(slices.size()+1 , vector<int>(slices.size()+1 ,-1));
        int case1 = solve( 0 , slices.size()-2 , slices , k,dp);
        
        vector<vector<int>> dp2(slices.size()+1 , vector<int>(slices.size()+1 ,-1));
        int case2 = solve( 1 , slices.size()-1 , slices , k,dp2);
        
        return max(case1,case2);
        
    }
};