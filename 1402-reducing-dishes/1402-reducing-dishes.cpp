class Solution {
public:
    
    int solve(vector<int>&sat , int index , int time,vector<vector<int>>&dp){
        int n=sat.size();
        
        if(index==n) return 0;
        
        if(dp[index][time]!=-1){
            return dp[index][time];
        }
        
        int incl = sat[index]*(time+1) + solve(sat , index+1 , time+1,dp);
        int excl = 0+ solve(sat , index+1 , time,dp);
        
        dp[index][time]=max(incl , excl);
        return dp[index][time];
        
        
    }
    
    
    int maxSatisfaction(vector<int>& sat) {
        
        sort(sat.begin() , sat.end());
        
        vector<vector<int>> dp(sat.size() , vector<int>(sat.size() ,-1));
        
        return solve(sat , 0 , 0,dp);
    }
};