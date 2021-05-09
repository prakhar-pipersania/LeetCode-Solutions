class Solution {
public:
    int countBalls(int lo, int hi) 
    {
        int m=0,l,h;
        map<int,int,greater<>> x;
        for(int i=lo;i<=hi;i++)
        {
            l=i,h=0;
            while(l)
            {
                h+=l%10;
                l/=10;
            }
            x[h]++;
            if(x[h]>m)
                m=x[h];
        }
        return m;
    }
};