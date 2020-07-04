bool judgeCircle(char * moves)
{
    int i;
    int u,d,l,r;
    u=d=l=r=0;
    while(moves[i]!='\0')
    {
        if(moves[i]=='L')
        {
            l++;
        }
        else if(moves[i]=='R')
        {
            r++;
        }
        else if(moves[i]=='U')
        {
            u++;
        }
        else if(moves[i]=='D')
        {
            d++;
        }
        i++;
    }
    if(l-r==0 && u-d==0)
        return true;
    return false;
}
