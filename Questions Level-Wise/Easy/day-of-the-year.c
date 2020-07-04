int dayOfYear(char * date)
{
    int i,y=0,m=0,d=0,value=0;
    for(i=0;i<4;i++)
        y=(y*10)+(date[i]-48);
    for(i=5;i<7;i++)
        m=(m*10)+(date[i]-48);
    for(i=8;i<10;i++)
        d=(d*10)+(date[i]-48);
    if((y%400==0||y%4==0)&&(m>2)&&(y%100!=0))
        value++;
    switch(m)
    {
        case 1:value+=d;break;
        case 2:value+=d+31;break;
        case 3:value+=d+59;break;
        case 4:value+=d+90;break;
        case 5:value+=d+120;break;
        case 6:value+=d+151;break;
        case 7:value+=d+181;break;
        case 8:value+=d+212;break;
        case 9:value+=d+243;break;
        case 10:value+=d+273;break;
        case 11:value+=d+304;break;
        case 12:value+=d+334;break;
    }
    return value;
}
