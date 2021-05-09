class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> x(n);
        for(int i=1;i<n;i++)
            nums[i]+=nums[i-1];
        x[0]=abs((n*nums[0])-nums[n-1]);
        for(int i=1;i<n;i++)
            x[i]=abs(((i+1)*(nums[i]-nums[i-1]))-nums[i])+abs(((n-i-1)*(nums[i]-nums[i-1]))-(nums[n-1]-nums[i]));
        return x;
    }
};
