/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize)
{
    int i,j,z,*p;
    *returnSize=numsSize;
    p=(int*)calloc(sizeof(int),(*returnSize));
    for(i=0;i<indexSize;i++)
    {
        p[i]=-1;
    }
    for(i=0;i<indexSize;i++)
    {
        if(p[index[i]]==-1)
        {
            p[index[i]]=nums[i];
            z=i;
        }
        else
        {
            int x=index[i],j=indexSize-1;
            while(j>x)
            {
                p[j]=p[j-1];
                j--;
            }        
            p[index[i]]=nums[i];
        }
    }   
    return p;
}
