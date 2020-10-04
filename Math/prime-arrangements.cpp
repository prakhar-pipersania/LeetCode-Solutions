class Solution {
public:
    int primecount(int n)
    {
        bool flag;
        int c=0;
        for(int i=2;i<=n;i++)
        {
            flag=1;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
                c++;
        }
        return c;
    }
    int fact(int n,int x)
    {
        unsigned long long c=1;
        for(int i=n;i>=2;i--)
            c*=i,c%=1000000007;
        for(int i=x;i>=2;i--)
            c*=i,c%=1000000007;
        return c;
    }
    int numPrimeArrangements(int n)
    {
        int pc=primecount(n);
        return fact(pc,n-pc);
    }
};
