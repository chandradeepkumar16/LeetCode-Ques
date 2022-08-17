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
        
        set<string> st;
        for(auto &i:ans){
            st.insert(i);
        }
        
        return st.size();
        
        
    }
};