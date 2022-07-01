class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0 , j=0;
        int l=s.size();
        set<char> st;
        int maxlen=0;
        
        while(j<l){
            if(st.find(s[j])==st.end()){
                st.insert(s[j]);
                j++;
                maxlen=max(maxlen, (int)st.size());
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        
        return maxlen;
    }
};