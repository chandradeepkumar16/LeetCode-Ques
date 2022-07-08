// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
void solve(string in, string out, vector<string>&ans) {
           if(in.length()==0) {
               ans.push_back(out);
               return;
           }
           solve(in.substr(1),out,ans);
           solve(in.substr(1),out+in[0],ans);
       }
       
 vector<string>AllPossibleStrings(string s) {
     string out = "";
     vector<string>ans;
     solve(s,out,ans);
     sort(ans.begin(),ans.end());
     ans.erase(ans.begin()+0);
     return ans;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  // } Driver Code Ends