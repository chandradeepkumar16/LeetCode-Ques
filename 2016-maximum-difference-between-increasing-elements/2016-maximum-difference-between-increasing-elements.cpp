class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
       int maxi=0;
        int mini=INT_MAX;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++){
            mini=min(mini , nums[i]);
            maxi=max(maxi , nums[i]-mini);
        }
        
        if(maxi==0) return -1;
        return maxi;
    }
};