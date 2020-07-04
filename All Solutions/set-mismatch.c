/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize)
{
    int i,j,*p,max=INT_MIN,c,v;
    *returnSize=2;
    p=(int*)malloc(sizeof(int)*2);
    p[0]=p[1]=-1;
    for(i=0;i<numsSize;i++)
        if(nums[i]>max)
            max=nums[i];
    for(i=1;i<=max;i++)
    {
        c=0;
        for(j=0;j<numsSize;j++)
        {
            if(i==nums[j])
            {
                c++;
                if(c>1)
                {
                    p[0]=nums[j];
                    if(p[1]!=-1)
                        return p;
                }
            }
            if(c==0&&j==numsSize-1)
            {
                p[1]=i;
                if(p[0]!=-1)
                    return p;
            }
        }
    }
    if(p[1]==-1)
        p[1]=max+1;
   return p; 
}
