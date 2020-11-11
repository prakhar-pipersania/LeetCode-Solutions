class Solution {
public:
    int solve(int &N)
    {
        int val=N--;
        if(N>0)
        {
            val*=N,N--;
            if(N>0)
                val/=N,N--;
        }
        return val;
    }
    int clumsy(int N) 
    {
        if(N<4)
            return (N-1>0?(N*(N-1)):N);
        int res=((N*(N-1))/(N-2))+(N-3);
        N-=4;
        while(N>0)
        {
            res-=solve(N);
            if(N>0)
                res+=N,N--;
        }
        return res;
    }
};
