class Solution {
public:
    int minCost(string colors, vector<int>& need) {
        int n=colors.size();
        vector<int> dp(n+1,0);
        
        dp[0]=0;
        int prev=need[0];
        
        for(int i=1;i<n;i++){
            
            if(colors[i]!=colors[i-1]){
                dp[i]=dp[i-1];
                prev=need[i];
            }else{
                dp[i]=dp[i-1]+min(prev , need[i]);
                prev=max(prev , need[i]);
                
            }
            
            
        }
        
        return dp[n-1];
        
        
        
    }
};