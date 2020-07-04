int singleNonDuplicate(int* nums, int numsSize)
{
    int l=0,mid,h=numsSize-1;
    while(l<h)
    {
        mid=((h-l)/2)+l;
        if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1])
            return nums[mid];
        else if(nums[mid]!=nums[mid-1]&&mid-1==0)
            return nums[0];
        else if(nums[mid]!=nums[mid+1]&&mid+1==numsSize-1)
            return nums[numsSize-1];
        else if((nums[mid]!=nums[mid-1]&&mid%2==0)||(nums[mid]!=nums[mid+1]&&mid%2!=0))
            l=mid;
        else if((nums[mid]!=nums[mid-1]&&mid%2!=0)||(nums[mid]!=nums[mid+1]&&mid%2==0))
            h=mid;
    }
    return nums[l];
}
