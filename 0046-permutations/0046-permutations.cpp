class Solution {
public:
    void check(vector<int>&nums , vector<vector<int>> &ans , int r , int l){
        if(r==l){
            ans.push_back(nums);
        }
        
        for(int i=r;i<=l;i++){
            swap(nums[r] , nums[i]);
            check(nums , ans , r+1 , l);
            swap(nums[r] , nums[i]);
        }
    }
    
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        check(nums , ans , 0 , nums.size()-1);
        return ans;
    }
};