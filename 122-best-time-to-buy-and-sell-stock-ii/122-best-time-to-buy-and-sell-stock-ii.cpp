class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> dp(n+1,0);
        int maxi=0;
        for(int i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                maxi+=prices[i]-prices[i-1];
            }
        }
        return maxi;
    }
};