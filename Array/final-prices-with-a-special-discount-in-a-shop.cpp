class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        vector<int> A(prices.size());
        int dis;
        for(int i=0;i<prices.size();i++)
        {
            dis=0;
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[j]<=prices[i])
                {
                    dis=prices[j];
                    break;
                }
            }
            A[i]=prices[i]-dis;
        }
        return A;
    }
};
