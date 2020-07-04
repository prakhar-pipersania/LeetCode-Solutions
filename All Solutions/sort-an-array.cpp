class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        int max=nums[0],min=nums[0],x=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
                max=nums[i];
            if(nums[i]<min)
                min=nums[i];
        }
        if(min<0)
            min*=-1;
        vector<int> A(max+min+1);
        for(int i=0;i<nums.size();i++)
            A[nums[i]+min]++;
        for(int i=0;i<A.size();i++)
            for(int j=0;j<A[i];j++)
                nums[x++]=i-min;
        return nums;
    }
};
