int search(int* nums, int numsSize, int target)
{
    int l=0,h=numsSize-1,mid;
    while(l<=h)
    {
        mid=((h-l)/2)+l;
        if(nums[mid]==target)
            return mid;
        else if(nums[h]>nums[l])
        {
            while(l<=h)
            {
                mid=((h-l)/2)+l;
                if(nums[mid]==target)
                    return mid;
                else if(nums[mid]>target)
                    h=mid-1;
                else
                    l=mid+1;
            }
            return -1;
        }
        else if((nums[l]<=target&&nums[mid]<target&&nums[l]>nums[mid])||(nums[l]<=target&&nums[mid]>target&&nums[l]<nums[mid])||(nums[l]>=target&&nums[mid]>target&&nums[l]>nums[mid]))
            h=mid-1;
        else if((nums[l]>=target&&nums[mid]<target&&nums[l]>nums[mid])||(nums[l]>=target&&nums[mid]>target&&nums[l]<nums[mid])||(nums[l]<=target&&nums[mid]<target&&nums[l]<nums[mid]))
            l=mid+1;
        else if(l==h-1)
        {
            if(nums[l]==target)
                return l;
            else if(nums[h]==target)
                return h;
            else
                return -1;
        }
        else
            return -1;
    }
    return -1;
}
