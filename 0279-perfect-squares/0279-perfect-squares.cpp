class Solution {
public:
    int cal(vector<int>&v , int tar ,int i  , vector<vector<int>>& dp)
    {
        if(tar==0)
            return 0 ; 
        if(tar<0 || i<0)
            return 1e9 ; 
        if(dp[i][tar]!=-1)
            return dp[i][tar] ;
        
        int op= 0 ; 
        if(v[i]<=tar)
        {
            op = min(1+cal(v , tar-v[i] , i ,dp  ) ,  cal(v , tar , i-1 ,dp )); 
        }
        else
            op = cal(v , tar , i-1  ,dp ) ; 
        
        return dp[i][tar]=  op ; 
    }
    
    
    int numSquares(int n) {
        vector<int>v ; 
        long long a=1 ; 
         while(a*a<=10000)
         {
             v.push_back(a*a) ; 
             a++ ; 
         }
        vector<vector<int>>dp(v.size(), vector<int>(n+1 , -1 ) ) ; 
        return cal(v , n , v.size()-1 , dp ) ; 
        
        
    }
};