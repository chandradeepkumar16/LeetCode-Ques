class Solution {
public:
    vector<int> results;
    
    void dfs(int n , int k , int len , int num){
        
        if(len==n){
            results.push_back(num);
            return;
        }
        
        int last=num%10;
        
        if(last+k<=9){
            dfs(n , k , len+1, num*10 + last+k);
        }
        if(k>0 && last-k>=0){
            dfs(n, k, len+1, num*10 +last-k);
        }
        
        
    }
    
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        for(int i=1;i<=9;i++){
            dfs(n , k , 1 , i);
        }
        return results;
        
    }
};