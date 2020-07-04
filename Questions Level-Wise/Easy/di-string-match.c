/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char * S, int* returnSize)
{
    int *a,i=0,k=0,N=strlen(S),Min=0;
    *returnSize=N+1;
    a=(int*)calloc(sizeof(int),(N+1));
    if(S[0]=='I')
        a[i]=Min++;
    else if(S[0]=='D')
        a[i]=N--;
    i++;
    while(S[k]!='\0')
    {
        if(S[k]=='I'&&S[k+1]=='D'||S[k]=='D'&&S[k+1]=='D')
            a[i++]=N--;
        else
            a[i++]=Min++;
        k++;
    }
    return a;
}
