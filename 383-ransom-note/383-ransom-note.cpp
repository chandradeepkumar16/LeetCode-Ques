class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int> um, um2;
        for(int i=0;i<m.size();i++){
            um[m[i]]++;
        }
        
        for(int i=0;i<r.size();i++){
            um2[r[i]]++;
        }
        int flag=0;
        for(int i=0;i<r.size();i++){
            if(um[r[i]]>=um2[r[i]]){
                flag=1;
            }else{
                flag=0;
                break;
            }
            
        }
        
        if(flag==1) return true;
        else return false;
        
        
    }
};