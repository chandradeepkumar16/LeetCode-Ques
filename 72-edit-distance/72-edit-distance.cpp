class Solution {
public:
       int cnt=0;
    
    int solve(string s , string t , int i , int j , int n , int m ,
    vector<vector<int>> &dp){
        if(i<0){
            return j+1;
        }
        if(j<0){
            return i+1;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(s[i]==t[j]){
            return dp[i][j] = solve(s ,t , i-1 , j-1 , n , m , dp);
        }

        return dp[i][j] =1+ min({
        solve(s , t , i-1 , j , n , m ,dp),
        solve(s , t, i , j-1 , n , m ,dp),
        solve(s , t, i-1 , j-1 , n ,m ,dp)
            });
        
        
        
        }
    
    
    int minDistance(string s, string t) {
        // Code here
        int n=s.length();
        int m=t.length();
        
        vector<vector<int>> dp(501 , vector<int>(501 ,-1));
        
        return solve(s , t , n-1 , m-1 , n , m , dp);
    }

};