// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:



    void helper(vector<int>&nums , vector<int> &v , int st , int end)
    {
        if(st>end){
            return;
        }
        int mid=(st+end)/2;
        v.push_back(nums[mid]);
        helper(nums , v,st, mid-1);
        helper(nums, v, mid+1 , end);
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> v;
        helper(nums,v,0,nums.size()-1);
        return v;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends