class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        
        
        unordered_map<char , int> um;
        
        for(auto i:s){
            um[i]++;
        }
        int cnt=0;
        for(auto i:um){
            if(i.second%2==1){
                cnt++;
            }
        }
        if(cnt>1){
            return -1;
        }
        
        
        int left =0 , right = s.size()-1;
        
        int res=0;
        while(left <right){
            
            int l= left , r= right;
            
            while(s[l]!=s[r]){
                r--;
            }
            
            if(l==r){
                swap(s[r] , s[r+1]);
                res++;
                continue;
            }
            else{
                
                while(r<right){
                    swap(s[r] , s[r+1]);
                    res++;
                    r++;
                }
                
            }
            left++;
            right--;
            
            
        }
        
        return res;
        
    }
};