class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map< string , vector<string>> um;
        
        for(int i=0;i<strs.size();i++){
            string newstr= strs[i];
            sort(strs[i].begin() , strs[i].end());
            um[strs[i]].push_back(newstr);
        }
        for(auto i:um){
            res.push_back(i.second);
        }
        
        return res;
        
    }
};