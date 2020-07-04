bool validMountainArray(int* A, int ASize)
{
    int i,j=0,k=0,x=INT_MIN,max=0,flag=0;
    if(ASize<3)
        return false;
    for(i=0;i<ASize;i++)
    {
        if(A[i]>x)
        {
            x=A[i];j++;max=x;
            if(flag==1)
                return false;
        }
        if(A[i]<max)
        {
            max=A[i];k++;flag=1;
        }
    }
    if(j+k==ASize&&max==A[ASize-1]&&x!=A[ASize-1]&&x!=A[0])
        return true;
    return false;
}
