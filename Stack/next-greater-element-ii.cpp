class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int Size=nums.size();
        vector<int> A(Size,-1);
        for(int i=0;i<Size;i++)
        {
            for(int j=i;j<i+Size;j++)
                if(nums[j%Size]>nums[i])
                {
                    A[i]=nums[j%Size];
                    break;
                }
        }
        return A;  
    }
};
