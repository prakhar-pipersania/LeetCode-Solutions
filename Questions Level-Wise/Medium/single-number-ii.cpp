class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        std::map<int,int> count;
        for(int i=0;i<nums.size();i++)
            count[nums[i]]++; 
        for(auto e: count)
            if(e.second==1)
                return e.first;
        return -1;
    }
};
