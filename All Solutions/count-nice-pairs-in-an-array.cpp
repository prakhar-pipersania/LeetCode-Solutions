class Solution {
public:
    int rev(int num)
    {
        int t=0;
        while(num>0)
            t=(t*10)+(num%10),num/=10;
        return t;
    }
    int countNicePairs(vector<int>& nums) 
    {
        int c=0;
        unordered_map<int,int> x;
        for(int i=0;i<nums.size();i++)
            x[nums[i]-rev(nums[i])]++;
        for(auto e: x)
            c=(c+((((long)e.second*(long)(e.second-1))/2)%1000000007))%1000000007;
        return c;
    }
};