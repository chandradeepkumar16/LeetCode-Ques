class Solution {
public:
    
    int solvemem(vector<int>&v , int i , int j , vector<vector<int>>& dp){
        if(i+1==j) return 0;
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        int ans=INT_MAX;
        for(int k=i+1;k<j;k++){
            ans=min(ans , v[i]*v[j]*v[k]+ solvemem(v , i , k,dp) + solvemem( v, k ,j,dp));
        }
        
        dp[i][j]=ans;
        return dp[i][j];
        
    }
    
    
    int minScoreTriangulation(vector<int>& v) {
        int n=v.size();
        // return solve(v , 0 , n-1);
        vector<vector<int>> dp(n+1 , vector<int> (n+1,-1));
        return solvemem( v, 0, n-1 ,dp);
        
    }
};