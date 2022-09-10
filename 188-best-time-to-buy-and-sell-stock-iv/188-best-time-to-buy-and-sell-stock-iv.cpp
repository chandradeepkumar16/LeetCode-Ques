class Solution {
public:
    
    int dp[1001][1001][2];
    
    int solve(vector<int>&prices , int k , int n , int i , bool state){
        
        if(i==n || k<0) return 0;
        
        if(dp[i][k][state]!=-1){
            return dp[i][k][state];
        }
        
        int maxi=INT_MIN;
        
        if(!state){
            maxi=max(maxi , prices[i]+solve(prices , k , n , i+1 , !state));
        }else{
            maxi=max(maxi , -prices[i]+solve(prices , k-1 , n , i+1 , !state ));
        }
        
        maxi=max(maxi , solve(prices , k , n , i+1 , state));
        return dp[i][k][state]=maxi;

    }
    
    
    
    int maxProfit(int k, vector<int>& prices) {
        
        int n=prices.size();
        memset(dp , -1 , sizeof(dp));
        return solve(prices , k , n , 0 , true);
        
    }
};