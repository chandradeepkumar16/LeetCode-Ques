class Solution {
public:
    
   vector<int> dfs(unordered_map<int,vector<int>> &adj,string &labels,int curr,int parent,vector<int> &result){
         vector<int> my_count(26,0);
         char ch = labels[curr];
         my_count[ch-'a']=1;
         for(auto &child : adj[curr]){
                if(child==parent){
                  continue;
                }

                vector<int> mychild(26,0);
                mychild = dfs(adj,labels,child,curr,result);

                for(int i=0;i<26;i++){
                    my_count[i]+=mychild[i];
                }
         }
         result[curr]=my_count[ch-'a'];
         return my_count;
   }


    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        unordered_map<int,vector<int>> adj;
        for(auto &x : edges){
            int u = x[0];
            int v = x[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> result(n,0);
        dfs(adj,labels,0,-1,result);
        return result;
    
    }
};