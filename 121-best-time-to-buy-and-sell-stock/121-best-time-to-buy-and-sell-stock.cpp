class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof=0;
        int mini=INT_MAX;
        
        for(int i=0;i<prices.size();i++){
            int curr=prices[i];
            
            if(curr<mini){
                mini=curr;
            }
            else if(curr-mini>prof){
                prof=curr-mini;
            }else{
                continue;
            }
        }
        
        return prof;
    }
};