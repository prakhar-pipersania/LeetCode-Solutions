int dominantIndex(int* nums, int numsSize)
{
    int i,c=0,x=INT_MIN,index;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]>x)
        {
            x=nums[i];
            index=i;
        }
    }
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]*2<=x && i!=index)
            c++;
    }
    if(c+1==numsSize)
        return index;
    return -1;
}
