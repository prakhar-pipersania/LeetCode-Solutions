class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> A;
        unordered_map<int ,int> findcommon;
        for(int i=0;i<nums1.size();i++)
            findcommon[nums1[i]]++;
        for(int i=0;i<nums2.size();i++)
            if(findcommon[nums2[i]]>0)
            {
                findcommon[nums2[i]]--;
                A.push_back(nums2[i]);
            }
        return A;
    }
};
