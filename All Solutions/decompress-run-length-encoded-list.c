/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize)
{
    int i,j,k=0,x=0,*p;
    for(i=0;i<numsSize;)
    {
        x+=nums[i];
        i=i+2;
    }
    *returnSize=x;
    p=(int*)malloc(sizeof(int)*(*returnSize));
    for(i=0;i<numsSize;)
    {
        for(j=0;j<nums[i];j++)
            p[k++]=nums[i+1];
        i=i+2;
    }
    return p;
}
