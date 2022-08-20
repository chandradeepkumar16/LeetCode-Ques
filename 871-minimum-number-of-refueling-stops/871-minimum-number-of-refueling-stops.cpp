class Solution {
public:
int minRefuelStops(int t, int s, vector<vector<int>>& stations) {

		
	 priority_queue<int> pq;
        
        int i=0;
        int n=stations.size();
        int ans=0;
        while(s<t && i<n)
        {
                if(s>=stations[i][0])
                {
                        pq.push(stations[i][1]);
                        i++;
                }
                else
                {
                        if(pq.empty())
                        {
                                return -1;
                        }
                        else
                        {
                                ans++;
                                s+=pq.top();
                                pq.pop();
                        }
                }
                
        }
        while(!pq.empty() && s<t)
        {
                s+=pq.top();
                pq.pop();
                ans++;
        }
        
        if(s>=t)
        {
                return ans;
        }
        return -1;
}
};