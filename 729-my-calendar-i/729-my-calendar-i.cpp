class MyCalendar {
public:
    unordered_map<int,int> um;
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {

        for(auto i:um){
            if(i.first<end && start<i.second){
                return false;
            }   
    }        
        um[start]=end;

        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */