class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        
        int timeleft = minutesToTest/minutesToDie;
        int p=0;
        
        p=ceil(log(buckets)/log(timeleft+1));
        
        return p;
        
    }
};