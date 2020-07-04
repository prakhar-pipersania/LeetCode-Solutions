int thirdMax(int* nums, int numsSize)
{
    int i,j,c=0,max,tmax,thmax;
    max=tmax=thmax=INT_MIN;
    for(i=0;i<numsSize;i++)
        if(nums[i]==INT_MIN)
            c++;
    for(i=0;i<numsSize;i++)
        if(nums[i]>max)
            max=nums[i];
    for(i=0;i<numsSize;i++)
        if(nums[i]==max)
            nums[i]=INT_MIN;
    for(i=0;i<numsSize;i++)
        if(nums[i]>tmax)
            tmax=nums[i];
    for(i=0;i<numsSize;i++)
        if(nums[i]==tmax)
            nums[i]=INT_MIN;
    for(i=0;i<numsSize;i++)
        if(nums[i]>thmax)
            thmax=nums[i];
    for(i=0;i<numsSize;i++)
        if(nums[i]==thmax)
            nums[i]=INT_MIN;
    if((thmax!=INT_MIN)||(thmax==INT_MIN&&tmax!=INT_MIN&&c>0))
        return thmax;
    return max;
}
