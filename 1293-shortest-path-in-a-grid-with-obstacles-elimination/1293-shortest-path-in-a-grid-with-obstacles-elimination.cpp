class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<int>> dir={
            {0,1} , {1,0} , {0,-1} , {-1,0}
        };
        
        vector<vector<vector<bool>>> vis(m , vector<vector<bool>>(n,vector<bool>(k+1,0)));
        int steps=0;
        queue<vector<int>> q;
        q.push({0,0,k});
        
        while(!q.empty()){
            
            int sz=q.size();
            
            while(sz--){
                auto curr = q.front();
                q.pop();
                if(curr[0]==m-1 && curr[1]==n-1) return steps;
                
                for(auto d:dir){
                    int i=curr[0]+d[0];
                    int j=curr[1]+d[1];
                    int obs = curr[2];
                    
                    if(i>=0 && i<m && j>=0 && j<n){
                        if(grid[i][j]==0 && !vis[i][j][obs]){
                            q.push({i,j,obs});
                            vis[i][j][obs]=true;
                        }
                        else if(grid[i][j]==1 && obs>0 && !vis[i][j][obs-1]){
                            q.push({i,j,obs-1});
                            vis[i][j][obs-1]=true;
                        }
                    }
                    
                }
                
                
            }
            
            steps++;
        }
        
        
        return -1;
        
        
    }
};