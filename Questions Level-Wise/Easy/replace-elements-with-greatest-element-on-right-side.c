/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize)
{
    int i,j,max,*a;
    a=(int*)calloc(sizeof(int),arrSize);
    for(i=0;i<arrSize-1;i++)
    {
        max=i+1;
        for(j=i+1;j<arrSize;j++)
            if(arr[j]>=arr[max])
                max=j;
        a[i]=arr[max];
        printf("%d\n",arr[max]);
    }
    a[arrSize-1]=-1;
    *returnSize=arrSize;
    return a;
}
