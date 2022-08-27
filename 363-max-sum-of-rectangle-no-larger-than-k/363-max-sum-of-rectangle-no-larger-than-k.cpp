class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int ans = INT_MIN, m = matrix.size(), n = matrix[0].size(), store[m], l, r, i, j, sum;
        for(l = 0; l < n; l++) {
            memset(store, 0, sizeof(store));
            for(r = l; r < n; r++) {
                for(i = 0; i < m; i++) store[i] += matrix[i][r];
                for(i = 0; i < m; i++) {
                    sum = 0;
                    for(j = i; j < m; j++) {
                        sum += store[j];
                        if(sum > ans && sum <= k) ans = sum;
                    }
                }
            }
        }
        return ans;
    }
    
};