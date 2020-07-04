class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        std::map<int,int> count;
        std::vector<int> a;
        a.reserve(2);
        for(int i=0;i<nums.size();i++)
            count[nums[i]]++;
        for(auto e: count)
        {
            if(e.second==1)
                a.push_back(e.first);
            if(a.size()==2)
                return a;
        }
        return a;    
    }
};
