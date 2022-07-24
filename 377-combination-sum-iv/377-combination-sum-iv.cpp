class Solution {
public:
    
    int solvemem(vector<int> & nums , int t , vector<int>&dp){
        
        if(t==0){
            return 1;
        }
        if(t<0){
            return 0;
        }
        
        if(dp[t]!=-1){
            return dp[t];
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=solvemem(nums , t-nums[i] , dp);
        }
        dp[t]=ans;
        return dp[t];
        
        
    }
    
    
    
    int combinationSum4(vector<int>& nums, int target) {
        
        vector<int> dp(target+1 , -1);
        return solvemem(nums , target , dp);
        
    }
};