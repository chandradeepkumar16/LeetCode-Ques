class Solution {
public:
    
    int solve(vector<int>&nums ,vector<int>&mul , vector<vector<int>>&dp , int st , int end , int m){
        
        if(m==mul.size()) return 0;
        if(dp[m][st]!=INT_MIN){
            return dp[m][st];
        }
        
        int left = nums[st]*mul[m] + solve(nums , mul , dp , st+1 ,end , m+1);
        int right =nums[end]*mul[m] +solve(nums,mul,dp,st,end-1,m+1);
        
        return dp[m][st]=max(left,right);
        
        
        
    }
    
    
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int n=nums.size();
        int m=mul.size();
        vector<vector<int>> dp(m+1,vector<int>(m+1,INT_MIN));
        
        return solve(nums,mul , dp , 0 , n-1 , 0);
        
    }
};