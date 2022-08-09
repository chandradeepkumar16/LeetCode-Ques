class Solution {
    const static int MOD = 1e9+7;
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        unordered_map<int, long> mp;
        
        for (int num: arr) {
            mp[num] = 1;   // single leaf node
        }
        
        for (int i = 1; i < n; i++) {
            int prod = arr[i];
            for (int j = 0; j < i; j++) {
                int num1 = arr[j];
                if (prod % num1 == 0 && mp.find(prod/num1) != mp.end()) {
                    int num2 = prod/num1;
                    mp[prod] = (mp[prod] + mp[num1]*mp[num2]) % MOD;
                }
            }
        }
        
        long res = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
            res = (res + it->second) % MOD;
        
        return (int)res;  
    }
};