/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes)
{
    int i,j,**a;
    *returnSize=numRows;
    a=(int**)malloc(sizeof(int*)*numRows); 
    *returnColumnSizes=(int*)malloc(sizeof(int)*numRows);
    for(i=0;i<numRows;i++) 
    {
        a[i]=(int*)malloc(sizeof(int)*(i+1));
        (*returnColumnSizes)[i]=i+1;
    }
    for(i=0;i<numRows;i++) 
        a[i][0]=a[i][i]=1;
    if(numRows>2)
    {
      for(j=1;j<numRows-1;j++)
      {
          for(i=0;i<j;i++)
              a[j+1][i+1]=a[j][i]+a[j][i+1];
      }   
    }
    return a;
}
