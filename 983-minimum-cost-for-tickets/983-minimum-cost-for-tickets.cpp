class Solution {
public:
    
    int solve(int n , vector<int>&days , vector<int>&costs ,int index, vector<int>&dp){
        
        if(index>=n){
            return 0;
        }
        
        if(dp[index]!=-1){
            return dp[index];
        }
        
        int option1= costs[0]+ solve(n , days , costs , index+1 , dp);
        
        int i;
        for(i=index; i<n && days[i] < days[index]+7 ;i++);
        
        int option2=costs[1]+solve( n , days , costs , i , dp);
        
        for(i=index; i<n && days[i] < days[index]+30 ;i++);
        int option3=costs[2]+solve( n , days , costs , i , dp);
        
        dp[index]=min(option1 , min(option2 ,option3));
        return dp[index];

    }
    
    
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n=days.size();
        vector<int> dp(n+1 ,-1);
        return solve(n,days , costs ,0, dp);
        
    }
};