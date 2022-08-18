class Solution {
public:
    
    double solve(int i , int j , int n , int k ,vector<vector<vector<double>>> &dp){
        
        if(i<0 || j<0 || i>=n || j>=n) return 0;
        if(k==0) return 1;
        
        if(dp[i][j][k]!=-1){
            return dp[i][j][k];
        }
        
        double ans = solve(i+2,j+1, n, k-1,dp) + solve(i+1,j+2, n, k-1,dp) + 
                    solve(i-1,j+2, n, k-1,dp) + solve(i-2,j+1, n, k-1,dp) + 
                    solve(i-2,j-1, n, k-1,dp) + solve(i-1,j-2, n, k-1,dp) +
                    solve(i+1,j-2, n, k-1,dp) + solve(i+2,j-1, n, k-1,dp);
        
        return dp[i][j][k] = ans/8.0;
        
    }
    
    
    double knightProbability(int n, int k, int row, int column) {
        vector<vector<vector<double>>> dp(n+1 , vector<vector<double>>(n+1 , vector<double>(k+1,-1)));
        
        return solve(row ,column , n , k , dp);
    }
};