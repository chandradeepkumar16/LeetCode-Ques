class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        int n=costs.size();
        for(int i=0;i<n;i++){
            if(coins>=costs[i]){
                ans++;
                coins=coins-costs[i];
            }
            if(coins<=0){
                break;
            }
        }
        
        return ans;
    }
};