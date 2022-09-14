class Solution {
public:
    bool help(vector<int>& data, int i) {
        int n=data.size();
        if(i==n)return true;
        if(data[i]<128){// 1-byte
            i++;
            return help(data,i);
        }
        else if(data[i]>=192 && data[i]<224){// 2-byte
            if(i+1<n && data[i+1]>=128){
                i+=2;
                return help(data,i);
            }
        }
        else if(data[i]>=224 && data[i]<240){// 3-byte
            if(i+2<n && data[i+1]>=128 && data[i+2]>=128){
                i+=3;
                return help(data,i);
            }
        }
        else if(data[i]>=240 && data[i]<248){// 4-byte
            if(i+3<n && data[i+1]>=128 && data[i+2]>=128 && data[i+3]>=128){
                i+=4;
                return help(data,i);
            }
        }

        return false;
    }
    bool validUtf8(vector<int>& data){
        return help(data, 0);
    }
};