class Solution {
public:
    
    int solvemem(int eggs , int fl , vector<vector<int>>&dp){
        
        if(eggs==0) return 0;
        
        if(eggs==1 || fl==0 || fl==1) return fl;
        
        if(dp[eggs][fl]!=-1){
            return dp[eggs][fl];
        }
        
        int ans=1000000,l=1,h=fl,temp=0;
     
        while(l<=h)
        {
            int mid=(l+h)/2;
            int left=solvemem(eggs-1,mid-1,dp);   
            int right=solvemem(eggs,fl-mid,dp);   
            temp=1+max(left,right);          
            if(left<right){                 
              l=mid+1;                       
            }
            else                             
            {    
                h=mid-1;
            }
            ans=min(ans,temp);               
        }
        
        return dp[eggs][fl]=ans;
        
    }
    
    
    int superEggDrop(int k, int n) {
        int eggs=k;
        int fl=n;
        vector<vector<int>> dp(eggs+1 , vector<int>(fl+1 ,-1));
        
        return solvemem(k , n , dp);
    }
    
};