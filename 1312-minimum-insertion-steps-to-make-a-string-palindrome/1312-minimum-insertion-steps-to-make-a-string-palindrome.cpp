class Solution {
public:
    
    int solve(string &s , string &t , int n , int m , vector<vector<int>>&dp){
        
        if(n==0 || m==0){
            return 0;
        }
        
        if(dp[n][m]!=-1){
            return dp[n][m];
        }
        
        if(s[n-1]==t[m-1]){
            return dp[n][m] = 1+ solve(s,t,n-1,m-1,dp);
        }else{
            return dp[n][m]=max(solve(s,t,n-1,m,dp) , solve(s,t,n,m-1,dp));
        }
        
    }
    
    
    int minInsertions(string s) {
        
        string t=s;
        reverse(t.begin() , t.end());
        int n = s.length() , m = s.length();
        vector<vector<int>> dp(n+1 , vector<int>(n+1 ,-1));
        int res= solve(s,t , n , m ,dp);
        
        return n-res;
        
        //  int n = s.length();
        // int dp[n+1][n+1];
        // string t =s;
        // reverse(s.begin(),s.end());
        // for(int i=0 ; i<=n ; i++){
        //     dp[0][i] = 0;
        //     dp[i][0] = 0;
        // }
        // for(int i=1 ; i<=n ; i++){
        //     for(int j=1 ; j<=n ; j++){
        //         if(s[i-1] == t[j-1])            
        //             dp[i][j] = 1+dp[i-1][j-1];
        //         else                        
        //             dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        //     }
        // }
        // int res= dp[n][n];
        // return n-res;
        
        
    }
};