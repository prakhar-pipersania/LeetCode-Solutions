bool hasGroupsSizeX(int* deck, int deckSize)
{
    int *a,min=INT_MAX,max=deck[0],c;
    a=(int*)calloc(sizeof(int),10000);
    for(int i=0;i<deckSize;i++)
    {
        a[deck[i]]++;
        if(deck[i]>max)
            max=deck[i];
    }
    for(int i=0;i<=max;i++)
        if(a[i]<min&&a[i]!=0)
            min=a[i];
    if(min==1)
        return false;
    for(int i=2;i<=min;i++)
    {
        c=0;
        for(int j=0;j<=max;j++)
            if(a[j]%i!=0)
                c=1;
        if(c==0)
            return true;
    }
    return false;
}
