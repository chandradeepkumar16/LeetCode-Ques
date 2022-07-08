// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

//kadane algo
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int res=0;
	    int len=INT_MIN;
	    
	    for(int i=0;i<S.length();i++){
	        if(res<0) res=0;
	        if(S[i]=='0') res++;
	        else res--;
	        len=max(len,res);
	    }
	    return len;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}
  // } Driver Code Ends