class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        if(nums.size()<3)
            return false;
        int y=0,z=nums.size()-1;
        while(y<z&&nums[y+1]<nums[y])
            y++;
        while(z>0&&nums[z-1]>nums[z])
            z--;
        if(y>=z)
            return false;
        int m=nums[z],c=1;
        for(int i=z-1;i>=y;--i)
        {
            if(nums[i]<m)
            {
                m=nums[i],c++;
                if(c==3)
                    return true;
            }
        }
        m=nums[y],c=1;
        for(int i=y+1;i<=z;++i)
        {
            if(nums[i]>m)
            {
                m=nums[i],c++;
                if(c==3)
                    return true;
            }
        }
        return false;
    }
};
