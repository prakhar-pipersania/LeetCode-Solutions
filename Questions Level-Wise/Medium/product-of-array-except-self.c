/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
    int v=1,*a=(int*)calloc(sizeof(int),numsSize);
    a[0]=1;
    for(int i=1;i<numsSize;i++)
        a[i]=a[i-1]*nums[i-1];
    for(int i=numsSize-2;i>=0;i--)
    {
        v*=nums[i+1];
        a[i]*=v;
    }
    *returnSize=numsSize;
    return a;
}
