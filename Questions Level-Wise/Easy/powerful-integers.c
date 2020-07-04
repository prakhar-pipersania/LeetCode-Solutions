/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* powerfulIntegers(int x, int y, int bound, int* returnSize)
{
    int i,j,k=0,c=0,*p,*a;
    p=(int*)malloc(sizeof(int)*1000000);
    for(i=0;i*i<bound;i++)
    {
        for(j=0;j*j<bound;j++)
        {
            if(pow(x,i)+pow(y,j)<=bound)
                p[c++]=pow(x,i)+pow(y,j);
        }
    }
    a=(int*)malloc(sizeof(int)*c+1);
    for(i=0;i<c;i++)
    {
        for(j=0;j<k;j++)
            if(p[i]==a[j])
                break;
        if(j==k)
            a[k++]=p[i];
    }
    *returnSize=k;
    return a;
}
