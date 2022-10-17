class Solution {
public:
    bool checkIfPangram(string sen) {
        
        set<char> st;
            
        for(int i=0;i<sen.size();i++){
            st.insert(sen[i]);
        }
        
        if(st.size()==26){
            return true;
        }
        
        return false;
        
    }
};