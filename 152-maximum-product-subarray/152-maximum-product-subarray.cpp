class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxhere=INT_MIN;
        int maxtot=1;
        
        for(int i=0;i<nums.size();i++){
            maxtot*=nums[i];
            maxhere=max(maxhere,maxtot);

            if(maxtot==0){
                maxtot=1;
            }
        }
        
        maxtot=1;
        
        for(int j=nums.size()-1;j>=0;j--){
            maxtot*=nums[j];
            maxhere=max(maxhere,maxtot);
            
            if(maxtot==0){
                maxtot=1;
            }
        }
        
        return maxhere;
    }
};