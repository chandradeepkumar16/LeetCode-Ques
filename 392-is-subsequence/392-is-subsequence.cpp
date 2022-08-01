class Solution {
public:
    bool subs(string& s, string& t, int m , int n){
        if(m==0) return true;
        if(n==0) return false;
        
        if(s[m-1]==t[n-1]){
            return subs(s,t,m-1,n-1);
        }
        return subs(s,t,m,n-1);
    }
    bool isSubsequence(string s, string t) {
       int sl=s.length();
        int tl=t.length();
        
        if(subs(s,t,sl,tl)) return true;
        else return false;
        
    }
};