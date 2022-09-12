class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin() , tokens.end());
        int n=tokens.size();
        int i=0 , j=n-1;
        int checker=0;
        int s=0;
        
        while(i<=j){
                if(tokens[i]<=power){
                    power-=tokens[i];
                    i++;
                    s++;
                    checker=max(checker,s);
                }
                else if(s>0){
                     power+=tokens[j];
                      j--;
                     s--;
                     checker=max(checker,s);
                    
                }
                else{
                    i++;
                }
            }

        
        return checker;
            
    }
};