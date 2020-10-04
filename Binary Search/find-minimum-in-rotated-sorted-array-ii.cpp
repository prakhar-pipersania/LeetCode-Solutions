class Solution {
public:
    int binarysearch(vector<int> nums,int l,int h)
    {
        while(l<h)
        {
            int mid=(h-l)/2+l;
            if(nums[l]<nums[h])
                return nums[l];
            else if(l+1==h)
                return nums[h];
            else if(nums[l]>=nums[mid]&&nums[mid]<=nums[h])
            {
                int temp1=binarysearch(nums,l,mid);
                int temp2=binarysearch(nums,mid,h);
                if(temp1<temp2)
                    return temp1;
                return temp2;
            }
            else
                l=mid;
        } 
        return nums[0];
    }
    int findMin(vector<int>& nums) 
    {
        return binarysearch(nums,0,nums.size()-1);
    }
};
