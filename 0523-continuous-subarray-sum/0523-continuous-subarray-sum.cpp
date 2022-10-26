class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size(), pretemp=0, sum=0;
        unordered_map<int,int> mods;
        for (int i=0; i<n; i++){
            sum = (sum + nums[i]) % k;  // [edited]
            if (mods[sum]) return true;
            mods[pretemp] ++;
            pretemp = sum;
        }
        return false;
    }
};