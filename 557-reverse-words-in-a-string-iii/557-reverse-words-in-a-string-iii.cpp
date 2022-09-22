class Solution {
public:
    string reverseWords(string str){
        vector<string> s;
        string res="";
        string ans="";
        for(int i=0;i<str.length();i++){
            if(str[i]!=' '){
                res+=str[i];
            }
            if(str[i]==' '){
                reverse(res.begin(),res.end());
                s.push_back(res);
                s.push_back(" ");
                res="";
            }
        }
        
        reverse(res.begin(),res.end());
        s.push_back(res);
        
        for(auto i:s){
            ans+=i;
        }
        
        return ans;

    }
    
};