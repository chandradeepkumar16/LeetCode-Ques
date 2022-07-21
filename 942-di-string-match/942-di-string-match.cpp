class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        vector<int> res;
        int n=s.length();
        int i=0;
        int j=n;
        
        for(int k=0;k<n;k++){
            if(s[k]=='I'){
                res.push_back(i);
                i++;
            }else{
                res.push_back(j);
                j--;
            }
        }
        
        if(s[n-1]=='I'){
            res.push_back(i);
        }else{
            res.push_back(j);
        }
        return res;
    }
};