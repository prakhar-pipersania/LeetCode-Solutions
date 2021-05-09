class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) 
    {
        int old=0;
        double x=0;
        for(auto e: customers)
        {
            x+=e[1];
            if(old>e[0])
                x+=old-e[0],old+=e[1];
            else
                old=e[0]+e[1];
        }
        x/=customers.size();
        return x;
    }
};
