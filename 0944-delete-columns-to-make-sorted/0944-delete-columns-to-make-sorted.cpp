class Solution {
public:
    int minDeletionSize(vector<string>& str) {
     
        int n=str.size();
        int m=str[0].size();
        
        int ans=0;
        
        for(int i=0;i<m;i++){
            string ch="";
            for(int j=0;j<n;j++){
                ch+=str[j][i];
            }
            string ch2=ch;
            sort(ch.begin() , ch.end());
            if(ch2!=ch){
                ans++;
            }
        }
        return ans;
    }
};