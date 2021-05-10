class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) 
    {
        int m=0,s=nums1.size()-1;
        for(int i=0;i<nums2.size();++i)
        {
            int l=0,h=min(i,s),mid;
            while(l<h)
            {
                mid=(l+h)/2;
                if(nums1[mid]<=nums2[i])
                {
                    m=max(m,i-mid);
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            if(nums1[l]<=nums2[i])
                m=max(m,i-l);
        }
        return m;
    }
};
