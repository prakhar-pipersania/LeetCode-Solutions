bool isPowerOfTwo(int n)
{
    long i,j=1;
    if(n==1)
        return true;
    for(i=0;n>=j;i++)
    {
        j=j*2;
        if(j==n)
            return true;
    }
    return false;
}
