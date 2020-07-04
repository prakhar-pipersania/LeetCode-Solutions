int findNumbers(int* nums, int numsSize)
{
    int i,c,co=0;
    for(i=0;i<numsSize;i++)
    {
        c=0;
        while(nums[i]>0)
        {
            nums[i]/=10;
            c++;
        }
        if(c%2==0)
            co++;
    }
    return co;
}
