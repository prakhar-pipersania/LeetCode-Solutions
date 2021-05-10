class SeatManager {
public:
    set<int> x;
    SeatManager(int n) 
    {
        for(int i=1;i<=n;i++)
            x.insert(i);
    }
    int reserve() 
    {
        int val=*x.begin(); 
        x.erase(val);
        return val;
    }
    
    void unreserve(int seatNumber) 
    {
        x.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */