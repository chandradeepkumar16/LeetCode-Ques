class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int k=n/3;
        vector<int> v;
        unordered_map<int,int> um;
        for(auto i:nums){
            um[i]++;
        }
        
        for(auto i:um){
            if(i.second>k){
                v.push_back(i.first);
            }
        }
        return v;
        
    }
};