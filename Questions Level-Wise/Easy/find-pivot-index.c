int pivotIndex(int* nums, int numsSize)
{
    if(numsSize==1)
        return 0;
    int i,j,sum1=0,sum2=0,n=0;
    for(j=0;j<numsSize;j++)
    {    
        for(i=0;i<n;i++)
            sum1+=nums[i];
        for(i=numsSize-1;i>n;i--)
            sum2+=nums[i];
        if(sum1==sum2)
            return n;
        sum1=sum2=0;
        n++;
    }
    return -1;
}
