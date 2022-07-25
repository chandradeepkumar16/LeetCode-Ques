class Solution {
public:
    
    int dp[201][20001];
    
    bool solve(vector<int>&nums , int n , int sum){
        
        if(n<=0 || sum<=0){
            return sum==0;
        }
        
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        int ans=0;
        if(nums[n-1]>sum){
             return dp[n][sum]=solve(nums , n-1 ,sum);
        }
        else{
            return dp[n][sum]= solve(nums , n-1 , sum-nums[n-1]) || solve(nums , n-1 , sum);
        }
        
      
    }
    
    
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        
        memset(dp , -1 , sizeof(dp));
        int sum=0;
        for(auto i:nums){
            sum+=i;
        }
        
        if(sum%2!=0){
            return false;
        }
        
        return solve(nums , n , sum/2);
        
        
    }
};