class Solution {
public:
    
    void dfs(int i , int j , int inicol , int newcol , vector<vector<int>>& img){
        int n=img.size();
        int m =img[0].size();
        
        if(i<0 || j<0) return;
        if(i>=n || j>=m) return;
        if(img[i][j]!=inicol) return;
        
        img[i][j]=newcol;
        dfs(i-1, j, inicol , newcol , img);
        dfs(i, j-1, inicol , newcol , img);
        dfs(i+1, j, inicol , newcol , img);
        dfs(i, j+1, inicol , newcol , img);


        
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicol=image[sr][sc];
        if(inicol!=color){
            dfs(sr,sc,inicol , color , image);
        }
        return image;
    }
};