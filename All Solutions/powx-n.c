double myPow(double x, int n)
{
    int t=n;
    double pow=1;
    if(x==1 || n==0)
    {
        pow=1;
    }
    else if(x==-1)
    {
        if(n%2==0)
            pow=1;
        else
            pow=-1;
    }
    else if(n==-2147483648)
    {
        pow=0;
    }
    else if(n!=0)
    {
        if(n<0)
            n=(-1)*n;
        if(n%2==0)
        {
            n=n/2;
            while(n>0)
            {
              pow*=x;
              n--;
            }
            pow*=pow;
        }
        else
        {
            n=n/2;
            while(n>0)
            {
            
              pow*=x;
              n--;
            }
            pow*=pow;
            pow*=x;
        }
        if(t<0)
        pow=1/pow;
    }
    
    return pow;   
}