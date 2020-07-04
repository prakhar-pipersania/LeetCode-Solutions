class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int val=1,max=INT_MIN,n=nums.size();
        if(n==0)
            return 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                val*=nums[i];
                if(val>max)
                    max=val;
            }
            else
            {
                val=1;
                if(0>max)
                    max=0;
            }
        }
        val=1;
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]!=0)
            {
                val*=nums[i];
                if(val>max)
                    max=val;
            }
            else
            {
                val=1;
                if(0>max)
                    max=0;
            }
        }
        return max;
    }
};
