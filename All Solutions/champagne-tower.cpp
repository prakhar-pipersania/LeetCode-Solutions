class Solution {
public:
    double champagneTower(int poured, int row, int glass) 
    {
        int size=1,count;
        vector<double> x(row+1);
        x[0]=poured;
        while(size<x.size())
        {
            count=0;
            for(int i=0;i<size;i++)
            {
                x[i]=(x[i]>1?x[i]-1:0);
                if(!x[i])
                    count++;
            }
            if(count==size)
                return 0;
            for(int i=size-1;i>=0;i--)
                x[i+1]+=x[i]/2,x[i]/=2;
            size++;
        }
        for(int i=0;i<size;i++)
            if(x[i]>1)
                x[i]=1;
        return x[glass];    
    }
};
