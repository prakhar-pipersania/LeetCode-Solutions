int mySqrt(int x)
{
    long i;
    for(i=0;i*i<=x;i++)
    {
        if((i*i)>=x)
        return i;
    }
    return i-1;
}
