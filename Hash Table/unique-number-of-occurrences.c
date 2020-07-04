bool uniqueOccurrences(int* arr, int arrSize)
{
    int i,*a,*b,c=0;
    a=(int*)calloc(sizeof(int),2002);
    b=(int*)calloc(sizeof(int),1001);
    for(i=0;i<arrSize;i++)
        a[arr[i]+1000]++;
    for(i=0;i<2002;i++)
        b[a[i]]++;
    for(i=1;i<1001;i++)
        if(b[i]>1)
            return false;
    return true;
}
