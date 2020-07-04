/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize)
{
    int i,j,x,*p,a[matSize],y,z,count=0;
    *returnSize=k;
    x=*matColSize;
    for(i=0;i<matSize;i++)
        a[i]=0;
    p=(int*)malloc(sizeof(int)*k);
    for(i=0;i<matSize;i++)
    {
        for(j=0;j<x;j++)
        {
            a[i]+=mat[i][j];
        }
    }
    for(j=0;j<k;j++)
    {
        y=INT_MAX;
        for(i=0;i<matSize;i++)
        {
            if(a[i]<y)
            {
                y=a[i];
                z=i;
            }
        }
        p[count++]=z;
        a[z]=INT_MAX;
    }
    return p;
}
