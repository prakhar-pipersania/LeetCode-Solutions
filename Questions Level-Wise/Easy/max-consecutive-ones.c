int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int i,x=0,max=0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==1)
        {
            x++;
            if(x>max)
                max=x;
        }
        else
            x=0;
    }
    return max;
}
