class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> um;
        
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        vector<int> ans;

        int rep=0;
        int no=0;


        for(int i=1;i<=nums.size();i++){
            if(um[i]>1){
                rep=i;
            }
            if(um[i]==0){
                no=i;
            }
        }            
        ans.push_back(rep);
        ans.push_back(no);
        return ans;
        
    }

};