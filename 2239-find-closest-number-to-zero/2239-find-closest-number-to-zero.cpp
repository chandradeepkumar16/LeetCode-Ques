class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int close=abs(nums[0]);
        int ans=nums[0];
        
        for(int i=0;i<nums.size();i++){
            int ch=abs(nums[i]);
            if(ch<close){
                ans=nums[i];
                close=ch;
            }
            else if(ch==close){
                ans=max(ans ,nums[i]);
            }
            
        }
        return ans;
        
    }
};