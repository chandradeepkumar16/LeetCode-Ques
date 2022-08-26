class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        
        string s = to_string(n);
        sort(s.begin(),s.end());
        
        vector<string> power;
        
        long temp = 1;
        while(temp<=1e9)
        {
            string t = to_string(temp);
            sort(t.begin(), t.end());
            if(s==t)
                return 1;
            temp *= 2;
        }
        
        return 0;


    }
};