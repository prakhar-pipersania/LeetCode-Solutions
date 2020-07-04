void moveZeroes(int* nums, int numsSize)
{
    int i,j;
    for(i=0,j=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            nums[j]=nums[i];
            j++;
        }
    }
    for(i=j;i<numsSize;i++)
        nums[i]=0;
}
