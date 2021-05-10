class Solution {
public:
    int getNumberOfBacklogOrders(vector<vector<int>>& orders) 
    {
        int count=0;
        map<int,int,greater<int>> buy;
        map<int,int> sell;
        for(int i=0;i<orders.size();i++)
        {
            if(orders[i][2]) //sell
            {
                while(orders[i][1]>0&&buy.size()>0&&begin(buy)->first>=orders[i][0])
                {
                    if(orders[i][1]>=begin(buy)->second)
                    {
                        orders[i][1]-=begin(buy)->second;
                        buy.erase(begin(buy)->first);
                    }
                    else
                    {
                        buy[begin(buy)->first]-=orders[i][1];
                        orders[i][1]=0;
                    }
                }
                if(orders[i][1]>0)
                    sell[orders[i][0]]+=orders[i][1];
            }
            else             //buy
            {
                while(orders[i][1]>0&&sell.size()>0&&begin(sell)->first<=orders[i][0])
                {
                    if(orders[i][1]>=begin(sell)->second)
                    {
                        orders[i][1]-=begin(sell)->second;
                        sell.erase(begin(sell)->first);
                    }
                    else
                    {
                        sell[begin(sell)->first]-=orders[i][1];
                        orders[i][1]=0;
                    }
                }
                if(orders[i][1]>0)
                    buy[orders[i][0]]+=orders[i][1];
            }
        }
        for(auto e: buy)
            count=(count+e.second)%1000000007;
        for(auto e: sell)
            count=(count+e.second)%1000000007;
        return count;
    }
};