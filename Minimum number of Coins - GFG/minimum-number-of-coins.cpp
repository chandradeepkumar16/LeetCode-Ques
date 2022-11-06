//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
     void solve(vector<int>& res, int arr[], int r, int N) {

        

        if(N == 0) return;

        

        if(N - arr[r] >= 0) {

            res.push_back(arr[r]);

            solve(res, arr, r, N - arr[r]);

        }

        else {

            

            solve(res, arr, r - 1, N);

        }

        

    }

    

    vector<int> minPartition(int N)

    {

        // code here

        int arr[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};

        

        int r = 9;

        vector<int> res;

        solve(res, arr, r, N);

        return res;

      }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends