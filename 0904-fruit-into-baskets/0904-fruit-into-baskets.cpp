class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int j =0 , ans =0;
        unordered_map<int,int> um;
        
        for(int i=0;i<fruits.size();i++){
            um[fruits[i]]++;
            
            if(um.size()<=2) ans=max(ans , i-j+1);
            else{
                um[fruits[j]]--;
                if(um[fruits[j]]==0) um.erase(fruits[j]);
                j++;
            }
            
        }
        return ans;
        
    }
};