class Solution {
public:
    int percentageLetter(string s, char letter) {
        unordered_map<char ,int> um;
        
        for(int i=0;i<s.size();i++){
            um[s[i]]++;
        }
        int p=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==letter){
                p=um[s[i]];
                break;
            }
        }
        int res=0;
        res= floor(float(p*100)/float(s.size()));
        return res;
    }
};