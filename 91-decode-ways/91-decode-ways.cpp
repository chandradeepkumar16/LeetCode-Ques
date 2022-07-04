class Solution {
public:
    int dp[101];
     int decode(string& s, int idx, int n)
    {
        if(idx < n && s[idx] == '0') return 0;
        if(idx >= n)
            return 1;
        
         if(dp[idx]!=-1) return dp[idx];
        int ways = 0;
        
        if(s[idx] != '0') ways = decode(s, idx+1, n);
            
        if(idx+1 < n && ((s[idx] == '1' && s[idx+1] <= '9') || (s[idx]=='2' && s[idx+1] < '7')))
           ways += decode(s, idx+2, n);
           
        return dp[idx]=ways;
    }
    
    int numDecodings(string s) {
       
        int n = s.size();
        memset(dp,-1,sizeof dp);
        return decode(s, 0, n);
    }
};