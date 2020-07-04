class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> a(2,-1);
        int mid,l=0,h=nums.size()-1;
        while(l<=h)
        {
            mid=((h-l)/2)+l;
            if((nums[mid]==target&&mid-1<0)||(nums[mid]==target&&mid-1>=0&&nums[mid-1]<target))
            {
                a[0]=mid;break;
            }
            else if(nums[mid]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        l=0,h=nums.size()-1;
        while(l<=h)
        {
            mid=((h-l)/2)+l;
            if((nums[mid]==target&&mid+1>=nums.size())||(nums[mid]==target&&mid+1<nums.size()&&nums[mid+1]>target))
            {
                a[1]=mid;break;
            }
            else if(nums[mid]<=target&&mid+1<nums.size()&&nums[mid+1]<=target)
                l=mid+1;
            else
                h=mid-1;
        }
        return a;
    }
};
