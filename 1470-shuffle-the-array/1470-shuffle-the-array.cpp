class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int t=2*n;
        vector<int> ans;
        vector<int> a, b;
        for(int i=0;i<t/2;i++){
            a.push_back(nums[i]);
        }
        
        for(int i=t/2;i<t;i++){
            b.push_back(nums[i]);
        }
        
        for(int i=0;i<t/2;i++){
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
        return ans;
        
    }
};