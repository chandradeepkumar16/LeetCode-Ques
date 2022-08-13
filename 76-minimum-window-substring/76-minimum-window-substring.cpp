class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length(), m = t.length();
        
        if(n<m) return "";
        
        
        unordered_map<char,int> mp;
        for(char &ele:t){
            mp[ele]++;
        }
        int count = mp.size();
        
        int i=0,j=0,ans=INT_MAX;
        string res="";
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count--;
                }
            }
            while(count==0){
                if(j-i+1<ans){
                    ans=j-i+1;
                    res=s.substr(i,j-i+1);
                }
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]>0){
                        count++;
                    }
                }
                i++;
            }
            j++;
        }
        return res;
        
        
    }
};