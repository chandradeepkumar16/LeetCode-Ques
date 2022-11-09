class Solution {
public:
    string makeGood(string s) {

string ans = "";
        
        for(char ee : s)
        {
            if(ans.size()&&(ans.back() - 'a' == ee - 'A' || ans.back() - 'A' == ee - 'a')) ans.pop_back();
            else ans += ee;
        }
       
        return ans;
        
    }
};