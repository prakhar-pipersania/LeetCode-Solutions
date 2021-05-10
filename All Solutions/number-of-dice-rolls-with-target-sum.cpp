class Solution {
public:
    void rollnextdice(vector<int> &cur,int size,int &f)
    {
        int last,sum=0,end=size-1;
        for(int i=end;i>end-f;i--)
            sum+=cur[i];
        last=cur[end];
        cur[--size]=sum;
        for(int j=end-f;j>0;j--)
        {
            sum=(sum+cur[j])%1000000007;
            sum=(sum-last)%1000000007;
            last=cur[size-1];
            cur[--size]=sum;
        }
    }
    int numRollsToTarget(int d, int f, int target) 
    {
        if(d>target||target>(d*f))
            return 0;
        int res,nf=f-1,size=f+(2*nf);
        vector<int> x((d*f)+(2*nf));
        for(int i=nf;i<f+nf;i++)
            x[i]=1;
        for(int i=2;i<=d;i++,size+=nf)
            rollnextdice(x,size,f);
        res=x[nf-d+target];
        return res+(res<0?1000000007:0);
    }
};
