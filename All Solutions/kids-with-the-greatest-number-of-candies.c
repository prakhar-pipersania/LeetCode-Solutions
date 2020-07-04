/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
{
    int max=0;
    bool *a=(bool*)calloc(sizeof(bool),candiesSize);
    for(int i=0;i<candiesSize;i++)
        if(candies[i]>candies[max])
            max=i;
    for(int i=0;i<candiesSize;i++)
        if(candies[i]+extraCandies>=candies[max])
            a[i]=true;
    *returnSize=candiesSize;
    return a;
}
