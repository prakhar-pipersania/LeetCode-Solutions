class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) 
    {
        if(nums.size()==0)
            return nums;
        int i,n,min=INT_MAX,max=INT_MIN;
        for(auto e: nums)
        {
            if(e<min)min=e;
            if(e>max)max=e;
        }
        min*=-1,n=min+max+1;
        vector<int> x(n),a(n);
        for(auto e: nums)
            x[e+min]++;
        for(i=1,a=x;i<n;i++)
            a[i]+=a[i-1];
        for(i=0;i<n;i++)
            a[i]-=x[i];
        for(i=0;i<nums.size();i++)
        {
            for(int j=min+1+nums[i];j<n;j++)
                a[j]--;
            nums[i]=a[nums[i]+min];
        }
        return nums;
    }
};
