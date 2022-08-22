class Solution {
public:
    bool isPowerOfFour(int n) {
        int x = n;
        int c = 0;
        while(x%4==0 && x>1)
        {
            x=x/4;
            c++;
        }
        
        int p = pow(4,c);
        if(p==n){
            return true;
        }
        else{
            return false;
        }
        
    }
};