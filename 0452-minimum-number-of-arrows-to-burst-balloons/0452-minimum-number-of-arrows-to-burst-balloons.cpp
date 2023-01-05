class Solution {
public:
    
    static bool comp(vector<int>&a , vector<int>&b){
        return a[1]<b[1];
    }
    
    
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        
        sort(points.begin() , points.end() , comp);
        
        int end=points[0][1];
        int cnt=1;
        
        for(int i=1;i<n;i++){
            if(points[i][0]>end){
                end=points[i][1];
                cnt++;
            }
        }
        return cnt;
    }
};