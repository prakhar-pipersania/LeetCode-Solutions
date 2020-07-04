class Solution {
public:
    vector<int> countBits(int num) 
    {
        vector<int> a (num+1,0);
        int n;
        if(num==0)
            return a;
        for(int i=1;i<=num;i++)
        {
            n=i;
            if(n%2!=0)
            {
                a[i]=a[i-1]+1;
            }
            else
            {
                while(n>0)
                {
                    a[i]+=n%2;
                    n/=2;
                }
            }
        }
        return a;
    }
};
