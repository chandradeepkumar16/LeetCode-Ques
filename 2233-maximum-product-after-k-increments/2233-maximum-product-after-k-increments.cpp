class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        long long mod = 1e9 + 7;
        
        // declare a min heap
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        // push all the elements into pq
        
        for(int i = 0; i < n; i++)
        {
            pq.push(nums[i]);
        }
        
        // increment the min. element by 1, perform this operation k times
        
        while(!pq.empty() && k)
        {
            // take out the minimum val
            
            int val = pq.top();
            
            pq.pop();
            
            // increment the val by 1
            
            val++;
            
            pq.push(val);
            
            k--;
        }
        
        // find the product of the all the elements
        
        int prod = 1;
        
        while(!pq.empty())
        {
            prod = (prod % mod * pq.top() % mod) % mod;
            
            pq.pop();
        }
        
        return prod;
    }
};