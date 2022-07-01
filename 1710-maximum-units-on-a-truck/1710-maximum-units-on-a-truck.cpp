class Solution {
public:
    
    
    static int comp(vector<int> &a , vector<int> &b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int k) {
        sort(boxTypes.begin(), boxTypes.end(),comp);
        int sum=0;
        for(int i=0;i<boxTypes.size();i++){
            int count=min(boxTypes[i][0] , k);
            sum+=count*boxTypes[i][1];
            k-=count;
            
            if(k==0) break;
        }
        
        return sum;
    }
};