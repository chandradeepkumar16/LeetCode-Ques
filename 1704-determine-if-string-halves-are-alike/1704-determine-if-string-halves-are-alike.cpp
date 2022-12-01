class Solution {
public:
    bool vowel(char ch)
{
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  return true;
  else
  return false;
}
    bool halvesAreAlike(string s) {
        
        int a=0;
        int b=0;
        int n=s.size();
        for(int i=0;i<n/2;i++){
            if(vowel(s[i])){
                a++;
            }
        }
        for(int i=n/2;i<n;i++){
            if(vowel(s[i])){
                b++;
            }
        }
        
        
        return a==b;
    }
};