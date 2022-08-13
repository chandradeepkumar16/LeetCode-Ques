class Solution {
public:
    
    bool solve( int src , vector<vector<int>>&adj , vector<bool>&visited , vector<bool> &dfsvis){
        
        visited[src]=true;
        dfsvis[src]=true;
        
        for(int j=0;j<adj[src].size();j++){
            
            if(visited[adj[src][j]]==false){
                if(solve(adj[src][j] , adj , visited , dfsvis)){
                    return true;
                }
            }else if(dfsvis[adj[src][j]]){
                return true;
            }
            
        }
        
        dfsvis[src]=false;
        return false;
        
        
    }
    
    
    bool canFinish(int n, vector<vector<int>>& p) {
        
        
        vector<vector<int>> adj(n);
        
        for(int i=0;i<p.size();i++)
        {
            adj[p[i][0]].push_back(p[i][1]);
        }
        
        vector<bool> visited(n ,false);
        vector<bool> dfsvis(n , false);
        
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                bool ans= solve( i , adj , visited , dfsvis);
                if(ans==1){
                    return false;
                }
            }
        }
        
        return true;
        
    }
};