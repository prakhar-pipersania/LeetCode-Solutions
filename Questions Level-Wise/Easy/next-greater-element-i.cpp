class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> A(nums1.size(),-1);
        map<int ,int> index;
        for(int i=0;i<nums2.size();i++)
            index[nums2[i]]=i;
        for(int i=0;i<nums1.size();i++)
        {
            int x=index[nums1[i]];
            for(int j=x;j<nums2.size();j++)
                if(nums2[j]>nums1[i])
                {
                    A[i]=nums2[j];
                    break;
                }
        }
        return A;
    }
};
