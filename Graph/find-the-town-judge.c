int findJudge(int N, int** trust, int trustSize, int* trustColSize)
{
    int c=0,v=0,*a=(int*)calloc(sizeof(int),N);
    for(int i=0;i<trustSize;i++)
        a[trust[i][0]-1]=1;
    for(int i=0;i<N;i++)
        if(a[i]==0)
        {
            v=i+1;
            c++;
        }
    if(c!=1)
        return -1;
    c=0;
    for(int i=0;i<trustSize;i++)
        if(trust[i][1]==v)
            c++;
    if(c==N-1)
        return v;
    return -1;
}
