int findLucky(int* arr, int arrSize)
{
    int i,j,k,num,out=INT_MIN,c=0;
    for(i=0;i<arrSize;i++)
    {
        c=0;
        for(j=0;j<arrSize;j++)
        {
            if(arr[i]==out)
                break;
            if(arr[i]==arr[j])
            {
                num=arr[i];
                c++;
            }
        }
        if(out<num&&num==c)
            out=num;
        printf("%d    %d\n",c,num);
    }
    if(out!=INT_MIN)
        return out;
    return -1;
}
