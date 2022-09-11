class Solution {
public:
    
    static bool comp(pair<int,int> &a , pair<int,int> &b){
        
        return a.second>b.second;
        
    }
    
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        
        vector<pair<int,int>> per;
        int mod=1e9+7;
        
        for(int i=0;i<n;i++){
            per.push_back({speed[i] , efficiency[i]});
        }
        
        sort(per.begin() , per.end() , comp);
        priority_queue<int , vector<int> , greater<int>> pq;
        
        long long int ans=0 , sum=0;
        
        for(int i=0;i<per.size();i++){
            sum+=per[i].first;
            
            pq.push(per[i].first);
           
            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }            
            ans=max(ans ,sum*per[i].second );
   
            
        }
        
        return ans%mod;

    }
};