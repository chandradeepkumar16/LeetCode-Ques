class Solution {
public:
    int maxEvents(vector<vector<int>>& ev) {
        
        sort(ev.begin() , ev.end());
        priority_queue<int, vector<int> , greater<int>> pq;
        int i=0 , ans=0;
        
        for(int d=1;d<=100000;d++){
            
            
            while(!pq.empty() && pq.top()<d){
                pq.pop();
            }
            
            while(i<ev.size() && ev[i][0]==d){
                pq.push(ev[i][1]);
                i++;
            }
            
            if(!pq.empty()){
                pq.pop();
                ans++;
            }
            
            if(i>=ev.size() && pq.empty()){
                break;
            }
            
            
        }
        
        return ans;
        
        
        
    }
};