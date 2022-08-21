class Solution {
public:
    int isMatchable(string stamp, string partialString){
        
        int n = stamp.length();
        int wildCards = 0;
        for(int i=0; i<n; i++){
            if(partialString[i] == '?')wildCards++;
            else if(stamp[i] != partialString[i]){
                return 0;
            }
        }
        
        if(wildCards<n)return 1;
        else return -1;
        
    }
    vector<int> movesToStamp(string stamp, string target) {
        
        int n = stamp.length();
        int m = target.length();
        
        vector<int> indices;
        
        bool foundMatch = true; // This means it found a match
        while(foundMatch){
            foundMatch = false;
            
            for(int i=0; i<m-n+1; i++){
                
                string matchableSubstr = target.substr(i, n);
                if(isMatchable(stamp, matchableSubstr) == 1){
                    indices.push_back(i);
                    foundMatch = true;
                    for(int j=0; j<n; j++)target[j+i] = '?';
                }
                
            }
        }
        
        if(isMatchable(target, target) != -1)return {};
        if(indices.size() > 10*m)return {};
        reverse(indices.begin(), indices.end());
        return indices;
    }
};