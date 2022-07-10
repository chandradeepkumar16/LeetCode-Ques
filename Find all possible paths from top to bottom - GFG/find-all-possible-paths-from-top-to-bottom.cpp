// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:

    // vector<vector<int>> ans;
    // int n, m;
    
    void help( int x, int y, vector<vector<int>>&grid , vector<int> v , 
    vector<vector<int>> &ans ,int N , int M){
       
        if(x==N-1 && y==M-1){
            v.push_back(grid[x][y]);
            ans.push_back(v);
            return;
        }
        if(x==N||y==M)
            return;
        
        v.push_back(grid[x][y]);
        help(x+1,y,grid,v , ans , N , M);
        help(x,y+1,grid,v, ans , N , M);
        
    }
    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        vector<int> v;
        vector<vector<int>> res;
        help(0,0,grid,v,res , n , m);
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
  // } Driver Code Ends