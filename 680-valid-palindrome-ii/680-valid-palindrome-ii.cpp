class Solution {
public:
    
    bool solve(string &s, int i , int j , int cnt){
        
        if(i-j==0){
            return true;
        }
        
        
        while(i<j){
            
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else if(s[i]!=s[j] && cnt==0){
                return solve(s,i+1 ,j , cnt+1) || solve(s,i,j-1,cnt+1);
            }else{
                return false;
            }
            
            
        }
        return true;
        
        
    }
    
    
    bool validPalindrome(string s) {
        
        int n=s.size();
        int cnt=0;
        return solve(s , 0 , n-1 , cnt);
        
    }
};