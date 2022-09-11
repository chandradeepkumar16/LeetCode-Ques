class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int> ,greater<int>> pq;
        long long int mod=1000000007,ans=1;
        
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        
        while(k--){
            
            int ch=pq.top();
            pq.pop();
            ch=ch+1;
            pq.push(ch);
        }
        
       
        while(!pq.empty()){
            ans=(ans*pq.top())%mod;
            pq.pop();
        }
        return ans%mod;
        
    }
};