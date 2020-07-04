bool isMonotonic(int* A, int ASize)
{
    int i,j,k,x=-100000,z=0;
    for(i=0;i<ASize;i++)
    {
        if(A[i]>=x)
        {
            x=A[i];z++;
        }        
    }
    if(z==ASize)
        return true;
    x=100000;z=0;
    for(i=0;i<ASize;i++)
    {
        if(A[i]<=x)
        {
            x=A[i];z++;
        }        
    }
    if(z==ASize)
        return true;
    return false;
}
