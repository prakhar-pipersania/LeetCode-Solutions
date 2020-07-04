int maxNumberOfBalloons(char * text)
{
    int i=0,a[5]={0,0,0,0,0},x=INT_MAX;
    while(text[i]!='\0')
    {
        switch(text[i])
        {
            case 'b':a[0]++;break;
            case 'a':a[1]++;break;
            case 'l':a[2]++;break;
            case 'o':a[3]++;break;
            case 'n':a[4]++;break;
        }
        i++;
    }
    if(a[0]<1||a[1]<1||a[2]<2||a[3]<2||a[4]<1)
        return 0;
    a[2]/=2;a[3]/=2;
    for(i=0;i<5;i++)
    {
        if(a[i]<x)
            x=a[i];
    }
    return x;
}
