class Solution {
public:
    int countOdds(int low, int high) {
        int start,r;
        int ans=0;
        if(low%2==1){
            start=low+1;
            ans+=1;

        }
        else{
            start=low;
            }
        r=high-start;
        ans+=(r/2);
        if(r%2==1)
        {
            ans+=1;
        }
        
        return ans;
        
    }
};