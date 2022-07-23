class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        int sum=0;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int newsum=0;
        sort(nums.begin() , nums.end() , greater<int>());
        
        for(int i=0;i<nums.size();i++){
            newsum+=nums[i];
            if(newsum > (sum-newsum)){
                res.push_back(nums[i]);
                break;
            }
            res.push_back(nums[i]);
        }
        return res;
        
    }
};