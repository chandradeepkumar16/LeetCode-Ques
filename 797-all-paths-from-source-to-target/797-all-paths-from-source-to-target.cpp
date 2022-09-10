class Solution {
public:
    
    void solve(vector<vector<int>>&graph , vector<vector<int>>&ans , vector<int> &temp , int n , int node){
        temp.push_back(node);
        if(node==n-1){
            ans.push_back(temp);
            return;
        }
        
        for(auto i:graph[node]){
            solve(graph , ans , temp , n , i);   
            temp.pop_back();
        }
        
        
    }
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        int n=graph.size();
        
        solve(graph, ans , temp , n , 0);
        return ans;
        
        
    }
};