class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        vector<int> ans(nums.size(),0);
        
        int i=0 , j=0 , k=0;
        
        while(i<pos.size() && j<neg.size()){
            if(k%2==0) nums[k++]=pos[i++];
            else nums[k++]=neg[j++];
        }
        
        while(i<pos.size()) nums[k++]=pos[i++];
        while(j<neg.size()) nums[k++]=neg[j++];
        return nums;
        
    }
};