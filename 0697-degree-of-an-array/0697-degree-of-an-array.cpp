class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> freq,firstOccurence,lastOccurence;
        int maxi = INT_MIN;

        for(int i = 0; i < nums.size(); ++i){
            freq[nums[i]]++;
            maxi = max(maxi,freq[nums[i]]);

            if(firstOccurence.find(nums[i]) == firstOccurence.end()){
                firstOccurence[nums[i]] = i;
            }

            lastOccurence[nums[i]] = i;
        }

        int res = INT_MAX;

        for(auto it : freq){
            if(it.second == maxi){
                res = min(res,lastOccurence[it.first] - firstOccurence[it.first] + 1);
            }
        }
        return res;
        
    }
};