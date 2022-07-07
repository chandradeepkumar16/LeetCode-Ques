// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
const long long  mod =1000000007;
   long long solve(int n,vector< long long > &dp){
       if(n==0){
           return 1;
       }
       if(n<0){
           return 0;
       }
       if(dp[n]!=-1){
           return dp[n]%mod;
       }
       
       long long A=solve(n-1,dp)%mod;
       long long B=solve(n-2,dp)%mod;
       long long C=solve(n-3,dp)%mod;
       
       return dp[n]= (A+B+C)%mod;
       
   }
    int countWays(int n)
    {
        // your code here
        vector<long long> dp(n+1,-1);
        return solve(n,dp);
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends