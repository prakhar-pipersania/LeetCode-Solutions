class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
        int sum=0;
        unordered_map<int,int> x;
        for(auto e: nums)
        {
            x[e]++;
        }
        for(auto e: x)
            if(e.second==1)
                sum+=e.first;
        return sum;
    }
};