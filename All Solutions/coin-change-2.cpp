class Solution {
public:
    int change(int amount, vector<int>& coins) 
    {
        vector<int> x(amount+1);
        x[0]=1;
        for(int i=0;i<coins.size();i++)
            for(int j=coins[i];coins[i]<=amount&&j<=amount;j++)
                x[j]+=x[j-coins[i]];
        return x[amount];
    }
};