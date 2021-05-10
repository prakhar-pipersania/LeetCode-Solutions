class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int> x(amount+1,-1);
        x[0]=0;
        for(int i=0;i<coins.size();i++)
        {
            if(coins[i]<=amount)
            {
                for(int j=coins[i];j<=amount;j++)
                    if(x[j-coins[i]]>=0)
                        x[j]=(x[j]==-1?x[j-coins[i]]+1:min(x[j],x[j-coins[i]]+1));
            }
        }
        return x[amount];
    }
};