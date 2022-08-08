class Solution {
public:
    
    int solve(vector<int>&nums , int n , int curr , int prev , vector<vector<int>>&dp){
        
        if(curr>=n) return 0;
        
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }
        
        int incl=0;
        if(prev==-1|| nums[curr]>nums[prev]){
            incl=1+solve(nums , n , curr+1 , curr ,dp);
        }
        int excl=solve(nums , n , curr+1 , prev,dp);
        int ans=INT_MIN;
        ans=max(ans , max(incl , excl));
        return dp[curr][prev+1]= ans;
        
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp( n , vector<int>(n,-1));
        return solve(nums , n , 0 , -1,dp);
    }
};