/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** buildArray(int* target, int targetSize, int n, int* returnSize)
{
    int k=0,v=0;
    char **a=(char**)calloc(sizeof(char*),target[targetSize-1]*2);
    for(int i=0;i<target[targetSize-1]*2;i++)
        a[i]=(char*)calloc(sizeof(char),5);
    for(int i=0;i<targetSize;i++)
    {
        if(target[i]<=target[targetSize-1])
        {
            a[k][0]='P';
            a[k][1]='u';
            a[k][2]='s';
            a[k][3]='h';
            a[k][4]='\0';
            k++;
            v++;
            while(target[i]!=v)
            {
                a[k][0]='P';
                a[k][1]='o';
                a[k][2]='p';
                a[k][3]='\0';
                k++;
                a[k][0]='P';
                a[k][1]='u';
                a[k][2]='s';
                a[k][3]='h';
                a[k][4]='\0';
                k++;
                v++;
            }
        }
    }
    *returnSize=k;
    return a;
}
