class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1) return 0;
        sort(nums.begin(),nums.end());
        int ans=1;
        int res=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1]){
                ans++;
            }else if(nums[i]==nums[i+1]){
                continue;
            }else{
                ans=1;
            }
            res=max(ans,res);
        }
        return res;
    }
};