class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0 , curr=0 , farth=0;
        
        for(int i=0;i<nums.size()-1;i++){
            farth=max(farth, i+nums[i]);
            
            if(i==curr){
                jumps++;
                curr=farth;
            }
        }
        return jumps;
    }
};