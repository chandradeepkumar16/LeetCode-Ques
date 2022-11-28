class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        map<int,int> um;
        set<int> st;
        
        for(auto i:matches){
            int winner=i[0];
            int loser=i[1];
            
            st.insert(winner);
            st.insert(loser);
            um[loser]++;
        }
        
        vector<vector<int>> ans;
        vector<int> one;
        vector<int> zero;
        
        for(auto i:st){
            if(um[i]==1){
                one.push_back(i);
            }
            else if(um[i]==0){
                zero.push_back(i);
            }
        }
        
        ans.push_back(zero);
        ans.push_back(one);
        return ans;
        
    }
};