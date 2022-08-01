class Solution {
public:
    vector<string> ans;
    void solve(string st ,int open, int close ,int n){        
        if(open==n && close==n){
            ans.push_back(st);
        }
        if(open<n){
            solve(st+"(" , open+1 , close ,n );
        }
        if(open> 0 && close < n && close <open){
            solve(st+")" ,open , close+1 , n);
        }

    }
     
    vector<string> generateParenthesis(int n) {
        int open= n , close =n;
        string st="";
        
        solve(st ,0, 0 , n);
        return ans;
    }
};