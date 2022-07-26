class Solution {
public:
    
    int solve(vector<vector<int>>&grid , int i , int j ,int n , int m ,vector<vector<int>> &dp){
        if(i>=n || j>=m)
            return 1e9;
        
        if(i==n-1 && j==m-1)
            return grid[i][j];
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        //i+1 or j+1
        int ans=INT_MAX;
        int down= grid[i][j] + solve(grid , i+1 , j , n , m , dp);
        int rig = grid[i][j] + solve(grid , i , j+1 , n , m , dp);
        
        ans=min(down , rig);
        dp[i][j]=ans;
        return ans;
        
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> dp(n , vector<int>(m,-1));
        
        return solve(grid , 0 , 0  , n  , m , dp);
    }
};