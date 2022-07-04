class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        if(nums.size()<3) return 0;
        int c=0 , ind =0 ;
        int curr=0;
        int diff=nums[1]-nums[0];
        
        for(int i=1;i<nums.size()-1;i++){
            curr=nums[i+1]-nums[i];
            
            if(curr==diff){
                ind++;
            }else{
                diff=curr;
                ind=0;
            }
            c+=ind;
        }
        return c;
    }
};