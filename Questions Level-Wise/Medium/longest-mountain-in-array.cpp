class Solution {
public:
    int longestMountain(vector<int>& A)
    {
        short flag=0,c=0,t=0,n=A.size()-1;
        if(n<2)
            return 0;
        for(int i=0;i<n;i++)
        {
            if(flag&&A[i]>A[i+1])
            {
                t++;
                if(flag==1)
                    flag++;
                if(t>=c)
                    c=t+1;
            }
            else if(A[i]<A[i+1])
            {
                if(flag==2)
                    t=0;
                flag=1,t++;
            }
            else
            {
                flag=t=0;
            }
        }
        return c;
    }
};
