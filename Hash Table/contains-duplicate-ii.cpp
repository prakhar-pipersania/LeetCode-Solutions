class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,vector<int>> A;
        vector<int> B;
        if(k==0)
            return false;
        for(int i=0;i<nums.size();i++)
            A[nums[i]].push_back(i);
        for(auto e=begin(A);e!=end(A);e++)
            if(e->second.size()>1)
            {
                B.reserve(e->second.size());
                for(auto e1: e->second)
                    B.push_back(e1);
                for(int i=0;i<B.size()-1;i++)
                    if(B[i+1]-B[i]<=k)
                        return true;
                B.resize(0);
            }
        return false;
    }
};
