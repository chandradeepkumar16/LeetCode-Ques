class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
                int count=0;
        for(int i=0;i<points.size();i++){
            unordered_map<float,int> um;
            for(int j=0;j<points.size();j++){
                if(i!=j){
                    if(points[i][0]-points[j][0]==0){
                        um[INT_MAX]++;
                    }
                    else{
                        float a=points[i][1]-points[j][1];
                        float b=points[i][0]-points[j][0];
                        float slope=a/b;
                        um[slope]++;
                    }
                }
            }
            for(auto it:um){
                count=max(it.second,count);
            }
        }
        return count+1;
    }
};