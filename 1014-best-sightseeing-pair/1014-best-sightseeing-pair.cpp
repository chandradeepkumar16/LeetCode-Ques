class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& val) {
        int n=val.size();
        
        int left=val[0];
        int maxi=0;
        
        for(int j=1;j<n;j++){
            maxi=max(maxi, left+val[j]-j);
            left=max(left , val[j]+j);
        }
        
        return maxi;
    }
};