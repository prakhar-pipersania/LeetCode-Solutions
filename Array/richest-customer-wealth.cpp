class Solution {
public:
    int maximumWealth(vector<vector<int>>& a)
    {
        int max=0;
        for(auto e: a) 
        {
            int sum=0;
            for(auto e1: e)
            {
                sum+=e1;
            }
            if(sum>max)
                max=sum;
        }
        return max;
    }
};
