int divide(int dividend, int divisor)
{
    int c=0;  
    if(dividend==INT_MIN && divisor==-1)
        c=INT_MAX;
    else if(divisor==1)
    {
        c=dividend;
    }
    else if(divisor==-1)
    {
        c=-1*dividend;
    }
    else if(dividend>0 && divisor>0)
    {
        while(dividend>=divisor)
        {
            dividend-=divisor;
            c++;
        }
    }
    else if(dividend<0 && divisor<0)
    {
        while(dividend<=divisor)
        {
            dividend-=divisor;
            c++;
        }
    }
    else if(dividend>0 && divisor<0)
    {   
        while(dividend>=0)
        {
            dividend+=divisor;
            //printf("%d\n",dividend);
            c--;
        } 
        c++;
    }  
    else if(dividend<0 && divisor>0)
    {   
        while(dividend<=0)
        {
            dividend+=divisor;
            //printf("%d\n",dividend);
            c--;
        } 
        c++;
    }   
    else 
    {
        c=0;
    }
    return c;
}