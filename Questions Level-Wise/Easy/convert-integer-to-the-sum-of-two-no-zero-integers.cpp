class Solution {
public:
    vector<int> getNoZeroIntegers(int n) 
    {
        int flag,t1,t2;
        vector<int> A(2);
        for(int i=1;i<n;i++)
        {
            flag=0;t1=i;t2=n-i;
            while(t1>0)
            {
                if(t1%10==0)
                {
                    flag=1;
                    break;
                }
                t1/=10;
            }
            while(t2>0&&flag==0)
            {
                if(t2%10==0)
                {
                    flag=1;
                    break;
                }
                t2/=10;
            }
            if(flag==0)
            {
                A[0]=i;
                A[1]=n-i;
            }
        }
        return A;
    }
};
