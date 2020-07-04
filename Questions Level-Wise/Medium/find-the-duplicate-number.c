int findDuplicate(int* nums, int numsSize)
{
    int max=nums[0],c;
    for(int i=0;i<numsSize;i++)
        if(nums[i]>max)
            max=nums[i];
    for(int i=1;i<=max;i++)
    {
        c=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]==i)
            {
                c++;
                if(c>1)
                    return i;
            }
        }
    }
    return -1;
}
