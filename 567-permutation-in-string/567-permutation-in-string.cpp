class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp1,mp2;
        int n = s2.size();
        for(auto it : s1) mp1[it]++;
        
        int i=0,j=0;
        while(j<n){
            if(j-i+1 < s1.size()){
                mp2[s2[j]]++;
                j++;
            }else{
                mp2[s2[j]]++;
                j++;
                if(mp1 == mp2) return true;
                mp2[s2[i]]--;
                if(mp2[s2[i]] == 0) mp2.erase(s2[i]);
                i++;
            }
        }
        return false;
    }
};