/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numMovesStones(int a, int b, int c, int* returnSize)
{
    int min,mid,max,total=a+b+c,*arr;
    arr=(int*)malloc(sizeof(int)*2);
    if(a>b&&a>c)
        max=a;
    else if(b>a&&b>c)
        max=b;
    else
        max=c;
    if(a<b&&a<c)
        min=a;
    else if(b<a&&b<c)
        min=b;
    else
        min=c;
    mid=total-min-max;
    if(mid==max-1&&mid==min+1)
        arr[0]=0;
    else if(mid==max-1||mid==min+1||mid==min+2||mid==max-2)
        arr[0]=1;
    else
        arr[0]=2;
    arr[1]=(max-(mid+1))+(mid-(min+1));
    *returnSize=2;
    return arr;
}
