class Solution {
public:
    int ceiling(vector<int>& nums,int y)
    {
        int t,sum=0;
        for(int i=0;i<nums.size();i++)
            t=nums[i]/y,sum+=t+((nums[i]/(y*1.0))>t?1:0);
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int s=1,e=1000000,mid,sum;
        while(s<e)
        {
            sum=0;
            mid=(s+e)/2;
            sum=ceiling(nums,mid);
            if(sum==threshold)
                e=mid;
            else if(s+1==e)
            {
                sum=ceiling(nums,s),mid=ceiling(nums,e);
                return (sum>mid&&sum<=threshold?s:e);
            }
            else if(sum>threshold)
                s=mid;
            else
                e=mid;
        }
        return s;
    }
};
