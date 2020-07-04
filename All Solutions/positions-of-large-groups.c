/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** largeGroupPositions(char * S, int* returnSize, int** returnColumnSizes)
{
    int **a,i,c=0,k=0,flag=0;
    if(strlen(S)==0)
    {
        *returnSize=0;
        return a;
    }
    a=(int**)calloc(sizeof(int*),350); 
    *returnColumnSizes=(int*)calloc(sizeof(int),350);
    for(i=0;i<350;i++) 
    {
        a[i]=(int*)calloc(sizeof(int),2);
        (*returnColumnSizes)[i]=2;
    }
    for(i=0;i<strlen(S)-1;i++)
    {
        if(S[i]==S[i+1])
        {
            if(flag==0)
            {
                a[k][0]=i;
                flag=1;
            }
            c++;
        }
        else
        {
            if(flag==1)
            {
                if(c>1)
                    a[k++][1]=i;
                flag=0;
            }
            c=0;
        }
    }
    if(flag==1)
    {
        if(c>1)
            a[k++][1]=i;
        flag=0;
    }
    *returnSize=k;
    return a;
}
