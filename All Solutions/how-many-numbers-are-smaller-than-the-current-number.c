/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
{
    *returnSize=numsSize;
    int i,j,*p,c=0,k=0;
    p=(int*)malloc(sizeof(int)*(numsSize));
    for(i=0;i<numsSize;i++)
    {
        c=0;
        for(j=0;j<numsSize;j++)
        {
            if(j!=i && nums[j]<nums[i])
            {
                c++;
            }
        }
        p[k++]=c; 
    }
    return p;
}
