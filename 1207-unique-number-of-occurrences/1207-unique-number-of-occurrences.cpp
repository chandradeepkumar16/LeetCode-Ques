class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> um;
        for(int i=0;i<arr.size();i++){
            um[arr[i]]++;
        }
        
        vector<int> v;
        for(auto i:um){
            v.push_back(i.second);
        }
        
        sort(v.begin() , v.end());
        for(int i=1;i<v.size();i++){
            if(v[i-1]==v[i]){
                return false;
            }
        }
        return true;
        
    }
};