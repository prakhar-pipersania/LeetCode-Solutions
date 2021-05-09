class Solution {
public:
    int tupleSameProduct(vector<int>& nums) 
    {
        int c=0;
        unordered_map<int,int> x;
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++)
                x[nums[i]*nums[j]]++;
        for(auto e: x)
            c+=(e.second*(e.second-1))*4;
        return c;
    }
};