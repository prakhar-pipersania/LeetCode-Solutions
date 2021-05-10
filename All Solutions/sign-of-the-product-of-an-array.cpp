class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int neg=0,zero=0;
        for(auto e: nums)
        {
            if(e<0)
                neg++;
            else if(e==0)
                zero++;
        }
        if(zero)
            return 0;
        if(neg%2)
            return -1;
        return 1;
    }
};