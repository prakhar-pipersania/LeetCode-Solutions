bool checkIfExist(int* arr, int arrSize)
{
    int i,j,k;
    for(i=0;i<arrSize;i++)
    {
        for(j=0;j<arrSize;j++)
        {
            if(arr[i]==2*arr[j] && i!=j)
                return true;
        }
    }
    return false;
}