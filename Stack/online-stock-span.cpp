class StockSpanner {
public:
    int index,greatest;
    vector<int> x;
    StockSpanner() 
    {
        index=0;
        greatest=INT_MIN;
    }
    int next(int price) 
    {
        int temp=0;
        if(price>=greatest)
        {
            greatest=price,index=x.size(),x.push_back(price);
            return x.size();
        }
        x.push_back(price);
        for(int i=x.size()-1;i>=index&&x[i]<=price;i--) 
            temp++;
        return temp;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
 