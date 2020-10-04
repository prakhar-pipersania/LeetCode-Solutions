class Solution {
public:
    int findPairs(vector<int>& nums, int k) 
    {
        bool flag;
        int n=nums.size(),c=0,val,old;
        sort(begin(nums),end(nums),greater<>());
        for(int i=0;i<n-1;i++)
        {
            flag=true;
            if(i>0&&nums[i]==nums[i-1])
                flag=false;
            if(flag)
            {
                val=0,old=INT_MIN;
                for(int j=i+1;j<n&&val<=k;j++)
                {
                    val=nums[i]-nums[j];
                    if(val==k&&nums[j]!=old)
                        c++,old=nums[j];
                }
            }
        }
        return c;
    }
};
