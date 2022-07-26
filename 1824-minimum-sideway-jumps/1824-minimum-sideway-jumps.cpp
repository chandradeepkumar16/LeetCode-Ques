class Solution {
public:
    
    int solvemem(vector<int>& obs , int currlane , int currpos,vector<vector<int>>&dp){
        int n=obs.size()-1;
        
        if(currpos==n){
            return 0;
        }
        
        if(dp[currlane][currpos]!=-1){
            return dp[currlane][currpos];
        }
        
        if(obs[currpos+1]!=currlane){
            return solvemem(obs , currlane , currpos+1,dp);
        }else{
            int ans=INT_MAX;
            for(int i=1;i<=3;i++){
                if(currlane!=i && obs[currpos]!=i){
                    ans=min(ans , 1+solvemem(obs , i , currpos,dp));
                }
            }
            dp[currlane][currpos] =ans;
            return  dp[currlane][currpos];
        }
    }
    
    
    int minSideJumps(vector<int>& obs) {
        
        vector<vector<int>> dp(4 , vector<int>(obs.size(),-1));
        
        return solvemem(obs , 2, 0,dp);
    }
};