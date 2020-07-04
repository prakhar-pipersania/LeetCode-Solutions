int maxCount(int m, int n, int** ops, int opsSize, int* opsColSize)
{
    int minrow=0,mincol=0;
    if(opsSize==0)
        return m*n;
    for(int i=0;i<opsSize;i++)
    {
        if(ops[i][0]<ops[minrow][0])
            minrow=i;
        if(ops[i][1]<ops[mincol][1])
            mincol=i;
    }
    return ops[minrow][0]*ops[mincol][1];
}
