class Solution {
public:
    int maxDistance(vector<int>& colors) {
         int n=colors.size();
        if(colors[0]!=colors[n-1]){
            return n-1;
        } else {
            int back=0;
            int front=0;
            for(int i=0;i<n;i++){
                if(colors[i]!=colors[0]){
                    front=i;
                    back=max(back,n-front-1);
                } 
            }
            return max(front,back);
        }
    }
};