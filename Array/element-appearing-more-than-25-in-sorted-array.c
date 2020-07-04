int findSpecialInteger(int* arr, int arrSize)
{
    int val,index;
    double c,c25=arrSize/4.0;
    if(arrSize==1)
        return arr[0];
    for(int i=0;i<arrSize-1;i++)
    {
        c=0;
        while(i+1!=arrSize&&arr[i]==arr[i+1])
        {
            c++;i++;
        }
        if(c+1>=c25&&c+1>val)
        {
            val=c+1;
            index=i;
        }
    }
    return arr[index];
}
