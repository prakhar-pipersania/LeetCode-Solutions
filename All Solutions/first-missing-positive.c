int search(int *a,int n,int key)
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
int firstMissingPositive(int* nums, int numsSize)
{
    int i,j,key=1;
    for(i=0;i<numsSize;i++)
    {
        for(j=0;j<numsSize-i-1;j++)
        {
            if(nums[j]>nums[j+1])
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    int value=search(nums,numsSize,key);
return value;
}
