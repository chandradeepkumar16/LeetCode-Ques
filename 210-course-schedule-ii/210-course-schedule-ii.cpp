class Solution {
public:
    
    bool toposort(int node , unordered_map<int, list<int>>&adj , unordered_map<int,bool>&visited
                 , stack<int>&s , unordered_map<int, bool> &dfsvisited){
        
        visited[node]=true;
        dfsvisited[node]=true;
        
        for(auto n:adj[node]){
            if(!visited[n]){
                bool detect=toposort(n , adj , visited , s , dfsvisited);
                if(detect){
                    return true;
                }
            }
            else if(dfsvisited[n]==true){
                return true;
            }
            
        }
        
        s.push(node);
        dfsvisited[node]=false;
        return false;
        
    }
    
    
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        
        unordered_map<int, list<int>> adj;
        
        for(int i=0;i<p.size();i++){
            int u=p[i][0];
            int v=p[i][1];
        
            adj[v].push_back(u);
        }
        
        unordered_map<int, bool> visited;
        unordered_map<int, bool> dfsvisited;
        stack<int> s;
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                bool found=toposort(i , adj , visited , s, dfsvisited);
                if(found){
                    return {};
                }
            }
        }
        
        vector<int> ans;
        while(!s.empty()){
            int a =s.top();
            ans.push_back(a);
            s.pop();
            
        }
        
        return ans;
        
    }
};