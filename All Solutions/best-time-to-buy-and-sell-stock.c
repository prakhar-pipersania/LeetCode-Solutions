int maxProfit(int* prices, int pricesSize)
{
    if(pricesSize<2)
        return 0;
    int max[pricesSize],profit=0;
    for(int i=pricesSize-2;i>=0;i--)
    {
        max[pricesSize-1]=prices[pricesSize-1];
        if(prices[i]>=max[i+1])
            max[i]=prices[i];
        else
            max[i]=max[i+1];
    }
    for(int i=0;i<pricesSize;i++)
        if((max[i]-prices[i])>profit)
            profit=max[i]-prices[i];
    return profit;
}
