/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
{
    int j,x=0,*p;
    p=(int*)calloc(sizeof(int),numsSize);
    for(j=0;j<numsSize;j++)
            p[nums[j]-1]++;
    for(j=0;j<numsSize;j++)
        if(p[j]==0)
            p[x++]=j+1;
    *returnSize=x;
    return p;
}
