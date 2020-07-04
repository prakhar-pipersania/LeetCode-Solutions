class Solution {
public:
    int minStartValue(vector<int>& nums) 
    {
        int c=0,flag=0,x;
        for(int i=0;i<nums.size();i++)
            if(nums[i]<0)
                c+=nums[i];
        c*=-1;
        if(c==0)
            return 1;
        for(int j=1;j<=c+1;j++)
        {
            x=j;flag=0;
            for(int i=0;i<nums.size();i++)
            {
                x+=nums[i];
                if(x<1)
                    flag=1;
            }
            if(flag==0)
                return j;
        }
        return c+1;
    }
};
