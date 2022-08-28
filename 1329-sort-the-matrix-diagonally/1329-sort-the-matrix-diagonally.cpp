class Solution {
public:
     bool isvalid(int i,int j,int m,int n){
        if(i<0 or j<0 or i>=m or j>=n) return false;
        return true;
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<bool>>visit(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(visit[i][j]) continue;
                int a=i,b=j;
                vector<int>temp;
                while(isvalid(a,b,m,n)){
                    visit[a][b]=true;
                    temp.push_back(mat[a++][b++]);
                }
                sort(temp.begin(),temp.end());
                a=i,b=j;
                int k=0;
                while(isvalid(a,b,m,n)){
                    mat[a++][b++]=temp[k++];
                }
            }
        }
        return mat;
    }
};