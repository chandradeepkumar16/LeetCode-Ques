class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int n=word.size();
        int flag1=0 , flag2=0 , flag3=1;
        int c=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(isupper(word[i])){
                c++;
                v.push_back(i);
            }
        }
        
        if(c==n){
            return true;
        }
        else if(c==0){
            return true;
        }
        else if(c==1 && v[0]==0){
            return true;
        }
        return false;
        
    }
};