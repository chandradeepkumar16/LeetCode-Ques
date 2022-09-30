class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=t.size();
        sort(t.begin() ,t.end());
        sort(s.begin() , s.end());
        
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                return t[i];
            }
        }
        return t[n-1];
        
    }
};