class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        unordered_map<int,int> um;
        int currsum=0;
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            if(currsum==k){
                c++;
            }
            if(um.find(currsum-k)!=um.end()){
                c+=um[currsum-k];
            }
            um[currsum]++;
        }
        return c;
        
    }
};