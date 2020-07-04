char * frequencySort(char * s)
{
    int k=0,max,*a=(int*)calloc(sizeof(int),95);
    for(int i=0;i<strlen(s);i++)
        a[s[i]-32]++;
    while(k<strlen(s))
    {
        max=0;
        for(int i=0;i<95;i++)
        {
            if(a[i]>a[max])
                max=i;
        }
        while(a[max]>0)
        {
            s[k++]=' '+max;
            a[max]--;
        }
    }
    return s;
}
