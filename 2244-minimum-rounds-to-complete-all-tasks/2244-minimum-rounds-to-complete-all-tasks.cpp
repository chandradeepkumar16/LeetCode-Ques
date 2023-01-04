class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        map<int,int> mp;
        int ans=0;
        
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        
        vector<int> cnt;
        for(auto i:mp){
            cnt.push_back(i.second);
        }
        int flag=1;
        for(int i=0;i<cnt.size();i++){
            if(cnt[i]==1){
                return -1;
            }
            int rem=cnt[i]/3;
            ans+=rem;
            if(cnt[i]%3!=0){
                ans++;
            }
        }
        return ans;
        
    }
};