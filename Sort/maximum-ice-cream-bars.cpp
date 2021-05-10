class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        int c=0;
        sort(costs.begin(),costs.end());
        for(auto e: costs)
        {
            if(e<=coins)
            {
                coins-=e;
                c++;
            }
            else
            {
                break;
            }
        }
        return c;
    }
};