class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
        int c=nums.size();
        
        if(c<2){
            return c;
        }
        int ans=1;
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j]!=nums[i]){
                nums[j+1]=nums[i];
                j=j+1;
                ans++;
            }
        }
        
        return ans;
        
    }
};