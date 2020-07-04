int findLengthOfLCIS(int* nums, int numsSize)
{
    int c=0,v=0;
    if(numsSize==0)
        return 0;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]<nums[i+1])
            c++;
        else
        {
            if(c+1>v)
                v=c+1;
            c=0;
        }
    }
    if(c+1>v)
        v=c+1;
    return v;
}
