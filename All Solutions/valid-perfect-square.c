bool isPerfectSquare(int num)
{
    for(long i=0;i*i<=num;i++)
    {
        int sq=i*i;
        if(sq==num)
            return true;
    }
    return false;
}

