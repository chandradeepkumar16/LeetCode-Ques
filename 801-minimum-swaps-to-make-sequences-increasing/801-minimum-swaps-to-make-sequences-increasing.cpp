class Solution {
public:
    
    int solve(vector<int>& nums1, vector<int>& nums2 , int index , bool swapped , 
              vector<vector<int>> &dp){
        
        if(index==nums1.size()) return 0;
        
        int ans=INT_MAX;
        
        if(dp[index][swapped]!=-1){
            return dp[index][swapped];
        }
        
                
        int prev1=nums1[index-1];
        int prev2=nums2[index-1];
        
        
        if(swapped){
            swap(prev1 , prev2);
        }
        if(nums1[index]>prev1 && nums2[index]>prev2){
            ans= solve(nums1 , nums2 , index+1 , 0 ,dp);
        }
        
        if(nums1[index]>prev2 && nums2[index]>prev1){
            ans=min(ans , 1+solve(nums1 , nums2 , index+1 , 1,dp));
        }
        
        dp[index][swapped]= ans;
        return dp[index][swapped];
        
        
    }
    
    
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        
        bool swapped=0;
        
        nums1.insert(nums1.begin() , -1);
        nums2.insert(nums2.begin() , -1);
        
        int n =nums1.size();
        
        vector<vector<int>> dp(n , vector<int>(2,-1));
        
        return solve(nums1 , nums2 , 1 , swapped ,dp);
        
    }
};