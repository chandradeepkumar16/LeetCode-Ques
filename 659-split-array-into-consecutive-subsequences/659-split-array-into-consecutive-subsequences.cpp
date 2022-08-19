class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> f , num;
        
        for(auto i:nums){
            f[i]++;
        }
        
        for(auto i:nums){
            
            if(f[i]>0){
                
                if(num[i-1]>0){
                    num[i-1]--;
                    num[i]++;
                    f[i]--;
                }else if(f[i+1]> 0 && f[i+2]>0){
                    f[i]--;
                    f[i+1]--;
                    f[i+2]--;
                    num[i+2]++;
                }else return false;
                
                
            }
            
        }
        return true;
        
    }
};