class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0]=1;
        
        int tw=0 , th=0 , fv=0;
        
        for(int i=1;i<n;i++){
            int multwo=dp[tw]*2;
            int multhree=dp[th]*3;
            int mulfive=dp[fv]*5;
            
            dp[i]=min({multwo , multhree, mulfive});
            
            if(dp[i]==multwo){
                tw++;
            }
            if(dp[i]==multhree){
                th++;
            }
            if(dp[i]==mulfive){
                fv++;
            }
        }
        return dp[n-1];
    }
};