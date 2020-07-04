int peakIndexInMountainArray(int* A, int ASize)
{
    int i,j,k,x=INT_MIN,index;
    for(i=0;i<ASize;i++)
    {
        if(A[i]>x)
        {
            x=A[i];
            index=i;
        }
        if(A[i]<x)
            return index;
    }
    return index;
}
