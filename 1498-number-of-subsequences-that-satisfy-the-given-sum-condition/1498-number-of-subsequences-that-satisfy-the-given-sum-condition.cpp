#define mod 1000000007;
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long int ans=0;
        int s=0;
        int e=nums.size()-1;
        
        vector<int>pow2(n+1,1);

        for(int i=1;i<=n;i++)
        {
            pow2[i]=(2*pow2[i-1])%mod;
        }
        
        while(s<=e){
            if(nums[s]+nums[e]<=target){
                ans=ans+pow2[e-s]%mod;
                s++;
            }else{
                e--;
            }
        }
        return ans%mod;
    }
};