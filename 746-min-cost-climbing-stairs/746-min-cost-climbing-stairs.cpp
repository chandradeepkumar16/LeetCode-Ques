class Solution {
public:
    
    int helper(int i , vector<int>&cost , vector<int> &dp){
        
        int n=cost.size();
        if(i==n){
            return dp[n];
        }
        
        if(dp[i]!=-1) return dp[i];
        
        int left=cost[i]+ helper(i+1 , cost , dp);
        int right=cost[i]+helper(i+2 , cost , dp);
    
        return left+right;
        
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        vector<int> dp(n,-1);
        
        dp[0]=cost[0];
        dp[1]=cost[1];
        
        for(int i=2;i<n;i++){
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        
        return min(dp[n-1],dp[n-2]);
        
        
    }
};