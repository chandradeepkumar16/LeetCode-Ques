class Solution {
public:
int gcd(int a,int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
    
    int mirrorReflection(int p, int q) {
        int lcm = (p*q)/gcd(p, q); 
        int m = lcm/p;
        int n = lcm/q;
        if(m%2==0 && n%2==1) return 0;
        if(m%2==1 && n%2==1) return 1;
        if(m%2==1 && n%2==0) return 2;
        return -1;
    }
};