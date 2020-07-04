int maxArea(int* height, int heightSize)
{
    if(heightSize<2)
        return 0;
   int i,v=0,max=0,maxf[heightSize],maxb[heightSize];
    for(i=0;i<heightSize;i++)
    {
        if(height[i]>=height[max])
            max=i;
        maxf[i]=height[max];
    } 
    max=heightSize-1;
    for(i=heightSize-1;i>=0;i--)
    {
        if(height[i]>=height[max])
            max=i;
        maxb[i]=height[max];
    }
    for(i=0;i<heightSize;i++)
    {
        for(int j=heightSize-1;j>=0;j--)
        {
            while(j!=heightSize-1&&maxb[j]==maxb[j+1]&&j>0)
                j--;
            if((i!=0&&maxf[i]==maxf[i-1])||(j==0&&maxb[j]==maxb[j+1]))
                break;
            if(i<j)
            {
                if(maxf[i]<=maxb[j])
                {
                    if((maxf[i]*(j-i))>v)
                        v=maxf[i]*(j-i);
                }
                else
                {
                    if((maxb[j]*(j-i))>v)
                        v=maxb[j]*(j-i);
                }
            }
        }
    }
    return v;
}
