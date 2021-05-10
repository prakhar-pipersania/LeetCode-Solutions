class Solution {
public:
    int bit(int num,int maximumBit)
    {
        int i=0,val=0;
        vector<int> x(maximumBit,1);
        while(num>0)
        {
            if(num%2)
                x[i]=0;
            num/=2;
            i++;
        }
        for(i=0;i<x.size();i++)
            val+=x[i]*pow(2,i);
        return val;
    }
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) 
    {
        int n=nums.size()-1;
        vector<int> x(n+1);
        for(int i=1;i<=n;i++)
            nums[i]^=nums[i-1];
        for(int i=0;i<=n;i++)
            x[i]=bit(nums[n-i],maximumBit);
        return x;
    }
};