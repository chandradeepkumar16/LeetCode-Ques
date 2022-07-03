class Solution {
public:
    int dp[301];
    
    int help(int i, string s , set<string>& worddict){
        if(i==s.size()) return 1;
        string temp;
        if(dp[i]!=-1) return dp[i];
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(worddict.find(temp)!=worddict.end()){
                if(help(j+1,s,worddict)) return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        memset(dp,-1,sizeof dp);
        
        for(auto i:wordDict) st.insert(i);
        
        return help(0,s,st);
        
    }
};