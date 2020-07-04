bool kLengthApart(int* nums, int numsSize, int k)
{
    int i,c=0,dis[numsSize+1];
    for(i=0;i<numsSize;i++)
        if(nums[i]==1)
            dis[c++]=i;
    for(i=c-1;i>0;i--)
        if(dis[i]-dis[i-1]-1<k)
            return false;
    return true;
}
