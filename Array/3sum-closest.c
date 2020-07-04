int threeSumClosest(int* nums, int numsSize, int target)
{
    int i,j,k,v,a[2],v1,v2;
    a[0]=INT_MIN,a[1]=INT_MAX;
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            for(k=j+1;k<numsSize;k++)
            {
                v=nums[i]+nums[j]+nums[k];
                if(v==target)
                    return target;
                else if(v<target&&v>a[0])
                    a[0]=v;
                else if(v>target&&v<a[1])
                    a[1]=v;
            }
        }
    }
    if(a[0]==INT_MIN)
        return a[1];
    if(a[1]==INT_MAX)
        return a[0];
    v1=a[1]-target;
    v2=target-a[0];
    if(v1<v2)
        return a[1];
    return a[0];
}
