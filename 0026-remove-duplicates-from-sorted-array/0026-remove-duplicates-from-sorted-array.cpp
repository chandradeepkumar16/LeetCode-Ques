class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
        int ch=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[ch]=nums[i];
                ch++;
            }
        }
        return ch;
        
    }
};