int search(int* nums, int numsSize, int target)
{
    int i=0,start=0,end=numsSize-1;
    while(i<numsSize)
    {
        int mid=(start+end)/2;
        if(target<nums[mid])
            end=mid-1;
        else if(target==nums[mid])
            return mid;
        else if(target>nums[mid])
            start=mid+1;
        i++;
    }
    return -1;
}
