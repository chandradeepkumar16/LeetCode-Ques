class Solution {
public:
    
    int solvetab(vector<vector<char>>& mat , int &maxi){
        
        int row=mat.size();
        int col=mat[0].size();
        
        vector<vector<int>> dp(row+1 , vector<int>(col+1,0));
        
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=0;j--){
                
                int r=dp[i][j+1];
                int diag=dp[i+1][j+1];
                int d=dp[i+1][j];
                
                if(mat[i][j]=='1'){
                    dp[i][j]= 1+min(r,min(diag,d));
                    maxi=max(maxi,dp[i][j]);
                }else{
                    dp[i][j]=0;
                }
                
            }
        }
        return dp[0][0];
            
        
    }
    
    
    int maximalSquare(vector<vector<char>>& mat) {
        
        int maxi=0;
        solvetab(mat,maxi);
        return maxi*maxi;
    }
};