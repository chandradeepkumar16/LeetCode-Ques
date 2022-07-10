class Solution {
public:
    
    int rec(vector<int> &days, vector<int> &costs, int i, vector <bool> map, vector <int>& memo) {
        if( i > 365)
            return 0;
        if(memo[i] != -1)
            return memo[i]; 
        if(!map[i])
            return memo[i] = rec(days, costs, i+1, map, memo);
        return memo[i] = min({
            costs[0] + rec(days, costs, i+1, map, memo),
            costs[1] + rec(days, costs, i+7, map, memo),
            costs[2] + rec(days, costs, i+30, map, memo)
        });
    }
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector <bool> map(366, false);
        vector <int> memo(366, -1);
        for(auto x: days)
            map[x] = true;
        int x = rec(days, costs, 0, map, memo);
        return x;
        
    }
};