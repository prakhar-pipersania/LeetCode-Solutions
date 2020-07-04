bool checkPerfectNumber(int num)
{
    int i,d=0;
    if(num==0)
        return false;
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
            d+=i;
    }
    if(num==d)
        return true;
    return false;
}
