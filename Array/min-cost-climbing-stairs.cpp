class Solution {
public:
    int minCostClimbingStairs(vector<int> cost) 
    {
        vector<int> x(cost.size()+1);
        x[1]=cost[0];
        for(int i=2;i<x.size();i++)
            x[i]=cost[i-1]+min(x[i-1],x[i-2]);
        return min(x[x.size()-1],x[x.size()-2]);
    }
};
