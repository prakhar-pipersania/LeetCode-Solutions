class MyCalendar {
public:
    set<pair<int,int>> x;
    MyCalendar() {}
    bool book(int start, int end) 
    {
        for(auto e: x)
        {
            if((start<=e.first&&e.first<end)||(start<e.second&&e.second<end)||(e.first<=start&&start<e.second)||(e.first<end&&end<e.second))
                return false;
            else if(end<e.first||e.first>end)
                break;
        }
        x.insert({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
 