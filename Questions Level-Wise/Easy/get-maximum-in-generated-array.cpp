class Solution {
public:
    int getMaximumGenerated(int n) 
    {
        int m=0;
        bool flag=false;
        vector<int> x(n+1,0);
        if(n>0)
            x[1]=1,m=1;
        for(int i=2;i<=n;i++)
        {
            x[i]=(i%2==0?x[(i/2)]:x[(i-1)/2]+x[((i-1)/2)+1]);
            m=max(m,x[i]);
        }
        return m;
    }
};
