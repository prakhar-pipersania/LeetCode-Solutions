O(n)
int singleNumber(int* nums, int numsSize)
{
    int n=0;
    for(int i=0;i<numsSize;i++)
        n^=nums[i];
    return n;
}
O(n^2)
int singleNumber(int* nums, int numsSize)
{
    int i,j,k,c=0,sn=0,v;
    for(i=0;i<numsSize;i++)
    {
        for(j=0;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                v=nums[i];
                c++;
            }
        }
        if(c==1)
            sn+=v;    
        c=0;
    }
return sn;
}
