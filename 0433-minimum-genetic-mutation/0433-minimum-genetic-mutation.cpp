class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        
        
        set<string> st;
        for(auto b:bank){
            st.insert(b);
        }
        
        queue<string> q;
        q.push(start);
        
        vector<char> gene={'A' , 'C' , 'G' ,'T'};
        
        int cnt=0;
        while(!q.empty()){
            
            int len=q.size();
            
            while(len--){
                
                auto s=q.front();
                q.pop();
                if(s==end) return cnt;
                for(auto g:gene){
                    
                    for(int i=0;i<8;i++){
                        int ch=s[i];
                        s[i]=g;
                        
                        if(st.find(s)!=st.end()){
                            q.push(s);
                            st.erase(s);
                        }
                        s[i]=ch;
                    }
                }
                
            }
            cnt++;
            
        }
        return -1;
        
    }
};