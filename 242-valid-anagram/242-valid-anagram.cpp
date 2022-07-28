class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin() ,s.end());
        sort(t.begin() , t.end());
        if (s.size() != t.size()) return false;
        unordered_map<char, int> um, um2;
        for (int i=0; i<s.size(); i++)
        {
            um[s[i]]++;
            um2[t[i]]++;
        }
        return um == um2;
    }
};