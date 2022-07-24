class Solution {
public:
    int minSwap(vector<int>& a, vector<int>& b) {
        int n=a.size();
        
        vector<int> x(n,0);
        vector<int> y(n,1);
        
        for(int i=1;i<n;i++){
            x[i]=y[i]=n;
            
            if( (a[i-1] <a[i]) && (b[i-1]<b[i]) ){
                x[i]=x[i-1];
                y[i]=(y[i-1]+1);
            }
            
            if( (a[i-1] < b[i])  && (b[i-1]<a[i]) ){
                x[i]=min(x[i] , y[i-1]);
                y[i]=min(y[i] , x[i-1]+1);
            }
        }
        
        return min(y[n-1] ,x[n-1]);
        
        
    }
};