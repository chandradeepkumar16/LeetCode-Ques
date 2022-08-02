class Solution {
public:
    int distinctSubseqII(string s) {
        int n=s.size();
        if(n==1) return 1; 
        long long mod = 1e9 + 7;
        unordered_map<char,int> occur;  
        unordered_map<int,long long> count;
        occur[s[0]]=0;
        count[0]=2;         
        count[-1]=1;        
        
        for(int i=1;i<n;i++){
            int prevoccur=-1;
            
            if(occur.find(s[i])!=occur.end()){
                prevoccur=occur[s[i]];        
            }
           
            count[i]=((2%mod) * (count[i-1]%mod))%mod; 
            if(prevoccur!=-1) count[i]=(count[i] - count[prevoccur-1]+mod)%mod;
			occur[s[i]]=i;  
        }
        
        return count[n-1]-1;
    }
};