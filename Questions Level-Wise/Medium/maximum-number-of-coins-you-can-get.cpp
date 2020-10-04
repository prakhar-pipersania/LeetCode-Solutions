class Solution {
public:
    int maxCoins(vector<int>& piles)
    {
        int sum=0,c=0;
        sort(piles.begin(),piles.end(),greater<>());
        for(int i=1;c<(piles.size()/3);i+=2,c++)
            sum+=piles[i];
        return sum;
    }
};
