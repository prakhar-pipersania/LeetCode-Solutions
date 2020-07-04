bool isPowerOfFour(int num)
{
    long i,j=1;
    if(num==1)
        return true;
    for(i=0;num>=j;i++)
    {
        j=j*4;
        if(j==num)
            return true;
    }
    return false;
}
