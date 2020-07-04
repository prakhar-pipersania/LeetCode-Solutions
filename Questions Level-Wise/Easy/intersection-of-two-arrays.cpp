class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> A;
        unordered_map<int ,int> findcommon;
        for(int i=0;i<nums1.size();i++)
            findcommon[nums1[i]]=1;
        for(int i=0;i<nums2.size();i++)
            if(findcommon[nums2[i]]==1)
                findcommon[nums2[i]]++;
        for(auto e=begin(findcommon);e!=end(findcommon);e++)
            if(e->second>1)
                A.push_back(e->first);
        return A;
    }
};
