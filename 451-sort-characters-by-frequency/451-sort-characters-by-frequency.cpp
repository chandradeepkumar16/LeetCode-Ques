class Solution {
public:
    string frequencySort(string s) {
        map<char , int > mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        string ans="";
        multimap<int, char ,  greater<int>> mul;
        for(auto i:mp){
            mul.insert({i.second , i.first});
        }
        
        for(auto i:mul){
            int f=i.first;
            while(f--){
                ans+=i.second;
            }
        }
        
        return ans;
        
    }
};