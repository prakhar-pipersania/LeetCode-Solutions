int repeatedNTimes(int* A, int ASize)
{
    int i,j,c,n=ASize/2;
    for(i=0;i<ASize;i++)
    {
        c=-1;
        for(j=0;j<ASize;j++)
        {
           if(A[i]==A[j])
               c++;
            if(c+1==n)
                return A[i];
        }
    }
    return A[i];
}
