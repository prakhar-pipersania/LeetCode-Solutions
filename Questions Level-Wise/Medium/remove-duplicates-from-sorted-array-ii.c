int removeDuplicates(int* nums, int numsSize)
{
    if(numsSize==0)
        return 0;
    int c,k,p,r=0;
    for(int i=0;i<numsSize-r;)
    {
        p=i;c=0;
        while(p+1!=numsSize-r&&nums[p]==nums[p+1])
        {
            c++;p++;
        }
        if(c>1)
        {
            i+=2;
            for(int j=p+1,k=i;j<numsSize-r;j++,k++)
                nums[k]=nums[j];
            r+=c-1;
        }
        else
            i++;
    }
    return (numsSize-r);
}
