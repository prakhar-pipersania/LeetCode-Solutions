class Solution {
public:
    static bool comp(pair<int,int> x,pair<int,int> y)
    {
        if(x.first==y.first)
            return (x.second>y.second);
        return (x.first<y.first);
    }
    vector<int> frequencySort(vector<int>& nums) 
    {
        short s=0;
        map<short,short> x;
        vector<pair<short,short>> x2;
        for(short i=0;i<nums.size();i++)
            x[nums[i]]++;
        for(auto e: x)
            x2.push_back({e.second,e.first});
        sort(x2.begin(),x2.end(),comp);
        for(short i=0;i<x2.size();i++)
            while(x2[i].first)
                nums[s]=x2[i].second,x2[i].first--,++s;
        return nums;
    }
};
