/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize)
{
    *returnSize=n;
    int i,j,k,*p;
    p=(int*)malloc(sizeof(int)*n);
    if(n==1)
    {
        p[0]=0;
        return p;
    }
    if(n%2==0)
    {
        for(i=0,j=-(n/2);i<n/2;i++)
            p[i]=j++;
        for(k=i,j=1;k<n;k++)
            p[k]=j++;
    }
    if(n%2!=0)
    {
        for(i=0,j=-(n/2);i<n;i++)
            p[i]=j++;
    }
    return p;
}
