// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string canJump(long long N) {
        // code here
        long long int a = log2(N);
        int ans=pow(2,a);
        
        if(ans==N) return "True";
        else return "False";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.canJump(N) << endl;
    }
    return 0;
}  // } Driver Code Ends