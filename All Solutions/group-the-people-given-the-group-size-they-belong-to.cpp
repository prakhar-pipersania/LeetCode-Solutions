class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) 
    {
        int c;
        vector<int> val;
        vector<vector<int>> res;
        unordered_map<int,vector<int>> A;
        for(int i=0;i<groupSizes.size();i++)
            A[groupSizes[i]].push_back(i);
        for(auto e=begin(A);e!=end(A);e++)
        {
            val.resize(e->first);
            c=0;
            for(auto e1: e->second)
            {
                val[c++]=e1;
                if(c==e->first)
                {
                    res.push_back(val);
                    c=0;
                }
            }
        }
        return res;
    }
};
