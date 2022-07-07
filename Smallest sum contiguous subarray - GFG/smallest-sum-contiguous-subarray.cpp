// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      //Code here
      int curr=a[0];
      int minso=a[0];
      int n=a.size();
      
      for(int i=1;i<n;i++){
          curr=min(a[i] , curr+a[i]);
          minso=min(minso , curr);
      }
      
      return minso;
      
  }
};


// { Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        Solution ob;
        
        int ans = ob.smallestSumSubarray(a);
        
        cout<<ans<<endl;
    }
}  // } Driver Code Ends