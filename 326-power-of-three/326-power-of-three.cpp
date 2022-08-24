class Solution {
public:
    bool isPowerOfThree(int n) {
        
        int c=0;
        int x=n;
        
        while(n%3==0 && n>0){
            c++;
                        n=n/3;

            
        }
        
        int ans=pow(3,c);
        if(ans==x) return true;
        
        return false;
    }
};