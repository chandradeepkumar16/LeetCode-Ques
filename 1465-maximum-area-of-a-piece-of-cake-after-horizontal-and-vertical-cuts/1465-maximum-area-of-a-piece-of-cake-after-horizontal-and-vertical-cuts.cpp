class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        
        hc.push_back(h);
        vc.push_back(w);
        
        sort(hc.begin(),hc.end());
        sort(vc.begin(), vc.end());
        
        int curr=0;
        int maxh=0 , maxw=0;
        for(int i=0;i<hc.size();i++){
            maxh=max(maxh, hc[i]-curr);
            curr=hc[i];
        }
        curr=0;
        for(int j=0;j<vc.size();j++){
            maxw=max(maxw, vc[j]-curr);
            curr=vc[j];
        }
        
        // int ans=1LL*maxh*maxw;
        
        return (1LL*maxh*maxw) % 1000000007;             
    }
};