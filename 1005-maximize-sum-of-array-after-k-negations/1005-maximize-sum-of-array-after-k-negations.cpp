class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
        sort(nums.begin() , nums.end());
        
        while(k--){
            nums[0]=-nums[0];
            sort(nums.begin() , nums.end());
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
            ans+=nums[i];
        
        return ans;
    }
};