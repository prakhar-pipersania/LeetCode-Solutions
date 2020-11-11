class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) 
    {
        int i,temp,z=0,size=A.size();
        vector<int> x(6),y(6);    
        for(i=0;i<size;i++)
            x[A[i]-1]++,y[B[i]-1]++;
        for(i=0;i<6;i++)
        {
            if(x[i]==size||y[i]==size)
                return 0;
            else if(x[i]+y[i]>=size)
            {
                z=i+1;
                break;
            }
        }
        if(!z)
            return -1;
        if(y[z-1]>x[z-1])
        {
            temp=y[z-1];
                for(i=0;i<size;i++)
                    if(B[i]!=z)
                        y[B[i]-1]--,y[A[i]-1]++;
                return (y[z-1]==size?(size-temp):-1);
        }
        temp=x[z-1];
        for(i=0;i<size;i++)
            if(A[i]!=z)
                x[A[i]-1]--,x[B[i]-1]++;
        return (x[z-1]==size?(size-temp):-1);
    }
};
