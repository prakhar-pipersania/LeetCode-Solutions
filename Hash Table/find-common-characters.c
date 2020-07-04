/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** commonChars(char ** A, int ASize, int* returnSize)
{
    int a[26],b[26],k=0;
    char **c=(char**)calloc(sizeof(char*),(strlen(A[0])+1));
    for(int i=0;i<(strlen(A[0])+1);i++)
        c[i]=(char*)calloc(sizeof(char),2);
    for(int i=0;i<26;i++)
        a[i]=b[i]=0;
    for(int j=0;A[0][j]!='\0';j++)
        a[A[0][j]-97]++;
    for(int i=1;i<ASize;i++)
    {
        for(int j=0;j<26;j++)
            b[j]=0;
        for(int j=0;A[i][j]!='\0';j++)
            b[A[i][j]-97]++;
        for(int j=0;j<26;j++)
            if(b[j]<a[j])
                a[j]=b[j];
    }
    for(int i=0;i<26;i++)
        for(;a[i]>0;a[i]--)
            c[k++][0]='a'+i;
    for(int i=0;i<k;i++)
        c[k][1]='\0';
    *returnSize=k;
    return c;
}
