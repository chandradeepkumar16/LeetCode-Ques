class Solution {
public:
     int decode(string& s, int idx, int n , vector<int>&dp)
    {
        if(idx < n && s[idx] == '0') return 0;
        if(idx >= n)
            return 1;
        
         if(dp[idx]!=-1) return dp[idx];
        int ways = 0;
        
         //storing the first number
        if(s[idx] != '0') ways = decode(s, idx+1, n,dp);
          
         // storing the second number and checking if it is lying in between range of 11 to 19
         // or lying between the range of 21 to 26
        if(idx+1 < n && ((s[idx] == '1' && s[idx+1] <= '9') || (s[idx]=='2' && s[idx+1] < '7')))
           ways += decode(s, idx+2, n,dp);
           
        return dp[idx]=ways;
    }
    
    int numDecodings(string s) {
       
        int n = s.size();
        vector<int> dp(101,-1);
        return decode(s, 0, n , dp);
    }
};