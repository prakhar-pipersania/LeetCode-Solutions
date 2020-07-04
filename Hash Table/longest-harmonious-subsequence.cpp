class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
        int v=0,c=0;
        if(nums.size()==0)
            return 0;
        vector<int> val;
        vector<int> count;
        map<int,int> A;
        for(int i=0;i<nums.size();i++)
            A[nums[i]]++;
        for(auto e=begin(A);e!=end(A);e++)
        {
            val.push_back(e->first);
            count.push_back(e->second);
        }
        for(int i=0;i<val.size()-1;i++)
        {
            if(val[i+1]-val[i]==1)
                c=count[i+1]+count[i];
            if(c>v)
                v=c;
        }
        return v;
    }
};
