class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        int Size=stones.size()-1,v;
        while(Size!=0)
        {
            sort(stones.begin(),stones.end());
            v=stones[Size]-stones[Size-1];
            if(v==0)
            {
                Size-=2;
                if(Size==-1)
                    return 0;
            }
            else
            {
                stones[Size-1]=v;
                Size--;
            }
        }
        return stones[0];
    }
};
