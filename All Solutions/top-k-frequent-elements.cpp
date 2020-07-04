class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> a;
        multimap<int,int,greater<>> b;
        vector<int> res;
        res.reserve(k);
        for(int i=0;i<nums.size();i++)
            a[nums[i]]++;
        for(auto e: a)
            b.insert({e.second,e.first});
        for(auto e: b)
        {
            res.push_back(e.second);
            if(res.size()==k)
                break;
        }
        return res;
    }
};