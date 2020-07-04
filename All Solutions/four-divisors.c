int sumFourDivisors(int* nums, int numsSize)
{
    int i,j,sum,c,tsum;
    tsum=sum=c=0;
    for(i=0;i<numsSize;i++)
    {
        c=2;sum=1+nums[i];
        for(j=2;j*j<=nums[i];j++)
        {
            if(nums[i]%j==0)
            {
                c++;sum+=j;
                if(j!=nums[i]/j)
                {
                    c++;
                    sum+=nums[i]/j;
                }
            }
            if(c>4)
                break;
        }
        if(c==4)
            tsum+=sum;
    }    
    return tsum;
}
