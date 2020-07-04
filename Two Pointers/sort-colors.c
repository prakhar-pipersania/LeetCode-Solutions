void sortColors(int* nums, int numsSize)
{
    int i,a,b,c,x;
    a=b=c=x=0;
    if(numsSize==0||numsSize==1)
        return;
    for(i=0;i<numsSize;i++)
    {
        switch(nums[i])
        {
            case 0:a++;break;
            case 1:b++;break;
            case 2:c++;break;
        }
    }
    for(i=0;i<a;i++)
        nums[i]=0;
    for(i=a;i<a+b;i++)
        nums[i]=1;
    for(i=a+b;i<a+b+c;i++)
        nums[i]=2;
}