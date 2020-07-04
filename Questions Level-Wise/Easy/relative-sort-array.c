/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize)
{
    int i,j,k=0,c=0,*p,x;
    *returnSize=arr1Size;
    p=(int*)malloc(sizeof(int)*(*returnSize));
    for(i=0;i<arr2Size;i++)
    {
        for(j=0;j<arr1Size;j++)
        {
            if(arr1[j]==arr2[i])
                p[k++]=arr1[j];
        }
    }
    x=k;
    for(j=0;j<arr1Size;j++)
    {
        for(i=0;i<arr2Size;i++)
        {
            if(arr1[j]==arr2[i])
                c++;
        }
        if(c==0)
           p[k++]=arr1[j];
        c=0;
    }
    for(i=x;i<arr1Size;i++)
    {
        for(j=x;j<arr1Size-1;j++)
        {
            if(p[j]>p[j+1])
            {
                int temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    return p;
}
