class Solution {
public:
 vector<int> findSubstring(string s, vector<string>& words) {
        int n = s.size(), w = words.size(), len = words[0].size(), total = len*w;
        
        vector<unordered_map<string, int>> storeDict(len);
        vector<int> ans;
        
        unordered_map<string, int> check;
        for(string str: words) check[str]++;
        
        for(int i=0; i<=n-total; i++){
            auto &dict = storeDict[i%len];
            
            if(dict.size()) {    
                string rem = s.substr(i-len, len);       
                string add = s.substr(i+total-len, len); 
                dict[add]++;
                if(dict[rem]==1) dict.erase(rem);
                else dict[rem]--;
            }
            
            else {              
                for(int j=i; j<i+total; j+=len){
                    string str = s.substr(j, len);
                    dict[str]++;
                }
            }
            
            if(dict == check) ans.push_back(i);
        }
        return ans;        
    }
};