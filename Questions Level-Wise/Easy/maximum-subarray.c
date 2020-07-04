int maxSubArray(int* nums, int numsSize)
{
    int sum=0,v=INT_MIN;
    for(int i=0;i<numsSize;i++)
    {
        sum+=nums[i];
        if(sum>v)
            v=sum;
        if(sum<0)
            sum=0;
    }
    return v;
}
