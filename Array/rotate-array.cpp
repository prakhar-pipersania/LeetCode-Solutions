class Solution {
public:
    void rev(vector<int> &x,int start,int end)
    {
        for(int i=start,j=end-1;i<j;i++,j--)
            x[i]^=x[j]^=x[i]^=x[j];
    }
    void rotate(vector<int>& nums, int k)
    {
        int n=nums.size();
        k%=n,rev(nums,0,n),rev(nums,0,k),rev(nums,k,n);
    }
};
