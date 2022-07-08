// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    void helper(vector<int> arr , int n , int &sum, vector<int> & ans , int i){
        
        if(i==n){
            ans.push_back(sum);
            return;
        }
        
        sum+=arr[i];
        helper(arr , n , sum , ans , i+1);
        sum-=arr[i];
        helper(arr , n , sum , ans , i+1);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int res=0;
        vector<int> ans;
        helper(arr,N,res,ans,0);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends