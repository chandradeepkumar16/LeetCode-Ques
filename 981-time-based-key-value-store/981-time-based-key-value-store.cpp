class TimeMap {
public:
     map<pair<string,int>,string>m;
    TimeMap() {
    }
    void set(string key, string value, int timestamp) {
        m[{key,timestamp}]=value;
    }
    string get(string key, int timestamp) {
        while(m[{key,timestamp}]=="" and timestamp>0){
            timestamp--;
        }
        if(timestamp<=0) return "";
        
        return m[{key,timestamp}];
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */