class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) 
    {
        int c=numBottles;
        while(numBottles>=numExchange)
            c+=numBottles/numExchange,numBottles=numBottles/numExchange+numBottles%numExchange;
        return c;
    }
};
