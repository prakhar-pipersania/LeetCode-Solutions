class Solution {
public:
    int rangeBitwiseAnd(int m, int n) 
    {
        int v=m;
        for(long i=m;i<=n;i++)
        {
            v=v&i;
            if(v==0)
                return 0;
        }
        return v;
    }
};
