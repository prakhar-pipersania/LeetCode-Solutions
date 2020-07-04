/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
    int i=1,j=0,*p;
    *returnSize=2;
    p=(int*)malloc(sizeof(int)*(*returnSize));
    for(i=0;i<numbersSize;i++)
    {
        for(j=i+1;j<numbersSize;j++)
        {
            if(numbers[i]+numbers[j]==target)
            {
                p[0]=i+1;
                p[1]=j+1;
                return p;
            }
        } 
    }
    return p;
}
