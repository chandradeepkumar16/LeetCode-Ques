class Solution {
public:
        vector<vector<int>> allsubsets;
    
    void gen(vector<int> &subset , int i , vector<int> & nums){
        if(i==nums.size()){
            allsubsets.push_back(subset);
            return;
        }
         gen(subset, i+1 , nums);
        subset.push_back(nums[i]);
        gen(subset , i+1 , nums);
        subset.pop_back();
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<int> res;
        gen(res,0,nums);
        return allsubsets;
    }
};