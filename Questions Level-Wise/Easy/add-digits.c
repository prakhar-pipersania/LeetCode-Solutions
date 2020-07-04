int addDigits(int num)
{
    int x,sum=0;
    while(num!=0)
    {
        x=num%10;
        num=num/10;
        sum+=x;
    }
    if(sum<10)
        return sum;
    return addDigits(sum);
}
