class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) 
    {
        int c=0;
        unsigned long long int temp;
        unordered_map<unsigned long long int,int> count;
        unordered_set<unsigned long long int> x; 
        for(int i=0;i<nums2.size();i++)
            temp=pow(nums2[i],2),x.insert(temp),count[temp]++;
        for(int j=0;j<nums1.size();j++)
            for(int k=j+1;k<nums1.size();k++)
            {
                temp=(unsigned long long int)nums1[j]*(unsigned long long int)nums1[k];
                if(x.find(temp)!=end(x))
                    c+=count[temp];
            }
        x.clear(),count.clear();
        for(int i=0;i<nums1.size();i++)
            temp=pow(nums1[i],2),x.insert(temp),count[temp]++;
        for(int j=0;j<nums2.size();j++)
            for(int k=j+1;k<nums2.size();k++)
            {
                temp=(unsigned long long int)nums2[j]*(unsigned long long int)nums2[k];
                if(x.find(temp)!=end(x))
                    c+=count[temp];
            }
        return c;
    }
};
