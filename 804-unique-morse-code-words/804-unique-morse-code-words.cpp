class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        vector<string> ans;
        
        for(int i=0;i<words.size();i++){
            string temp="";
            string s=words[i];
            
            for(int j=0;j<s.size();j++){
                temp+=v[s[j]-'a'];
            }
            ans.push_back(temp);
            
        }
        
        unordered_map<string , int> um;
        
        for(int i=0;i<ans.size();i++){
            um[ans[i]]++;
        }
        
        return um.size();
        
    }
};