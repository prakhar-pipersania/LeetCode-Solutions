/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *p,i,j;
    *returnSize=2;
    p=(int*)malloc(sizeof(int)*(*returnSize));
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                p[0]=i;
                p[1]=j;
                return p;
            }
        } 
    }
    p[0]=i;
    p[1]=j;
    return p;
}
