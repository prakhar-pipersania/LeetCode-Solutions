bool lemonadeChange(int* bills, int billsSize)
{
    int i,c=0,c1=0;
    for(i=0;i<billsSize;i++)
    {
        if(bills[i]==5)
            c++;
        else if(bills[i]==10)
        {
            if(c<1)
                return false;
            c--;
            c1++;
        }
        else if(bills[i]==20)
        {
            if(c>=1&&c1>=1)
            {
                c--;c1--;
            }
            else if(c>=3)
                c-=3;
            else
                return false;
        }
    }
    return true;
}
