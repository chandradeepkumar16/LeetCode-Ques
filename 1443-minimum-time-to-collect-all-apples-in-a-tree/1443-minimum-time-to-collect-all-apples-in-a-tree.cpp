class Solution {
public:
    
    int dfs(int node , vector<vector<int>>&adj , vector<int>&vis , vector<bool>& hasApple){
        if(vis[node]) return 0;
        vis[node]=1;
        int count=0;
        
        for(int child:adj[node]){
            count+=dfs(child ,adj , vis , hasApple);
        }
        
        if((hasApple[node] || count!=0 )&& node!=0){
            count++;
        }
        return count;
        
    }
    
    
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        
        vector<vector<int>>adj(n+1);
        vector<int> vis(n+1);
        
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        return 2*dfs(0 , adj , vis , hasApple);
        
    }
};