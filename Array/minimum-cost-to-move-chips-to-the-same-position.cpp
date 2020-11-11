class Solution {
public:
    int minCostToMoveChips(vector<int>& position) 
    {
        short even=0,odd=0;
        for(auto e: position)
            e&1?odd++:even++;
        return min(odd,even);
    }
};
