class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> um;
        
        for(int i=0;i<arr.size();i++){
            um[arr[i]]++;
        }
        int len=0 , cnt=0;
        
        int n=arr.size()/2;
        priority_queue<int> pq;
        
        for(auto i:um){
            pq.push(i.second);
        }
        
        while(len<n){
            len+=pq.top();
            pq.pop();
            cnt++;
        }
    return cnt;
    }
};