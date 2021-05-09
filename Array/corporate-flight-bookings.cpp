class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) 
    {
        vector<int> x(n+1);
        for(auto e: bookings)
            x[e[0]-1]+=e[2],x[e[1]]-=e[2];
        for(int i=1;i<n;i++)
            x[i]+=x[i-1];
        x.pop_back();
        return x;
    }
};
