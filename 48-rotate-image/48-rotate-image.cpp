class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size()-1;i++){
          for(int j=i+1;j<matrix[0].size();j++){
              swap(matrix[i][j],matrix[j][i]);
          }

        }
        for(int i=0;i<matrix.size();i++){
             reverse(matrix[i].begin(),matrix[i].end());
        }
    
    }
};