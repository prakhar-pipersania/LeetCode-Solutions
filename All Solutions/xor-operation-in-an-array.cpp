class Solution {
public:
    int xorOperation(int n, int start) 
    {
        int val=0,x;
        for(int i=0;i<n;i++)
        {
            x=start+(2*i);
            val^=x;
        }
        return val;
    }
};
