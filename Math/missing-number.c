int search(int *a, int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            key++;
            return search(a,n,key);
        }
    }
return key;
}
int missingNumber(int* nums, int numsSize)
{
    return search(nums,numsSize,0);
}
