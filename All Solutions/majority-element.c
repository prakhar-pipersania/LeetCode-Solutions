int majorityElement(int* nums, int numsSize)
{
    int i,j,x=0,max=0,num;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]==num)
            i++;
        else
        {
            for(j=0;j<numsSize;j++)
            {
                if(nums[j]==nums[i])
                    x++;
                if(x>max)
                {
                    num=nums[j];
                    max=x;
                }
            }
            x=0;
        }
    }
    return num;
}
