class Solution {
public:
    void findper(vector<vector<int>> &res,vector<int>& val,vector<int> a)
    {
        vector<int> temp;
        temp.reserve(val.size()-1);
        for(int i=0;i<val.size();i++)
        {
            a.push_back(val[i]);
            for(int j=0;j<val.size();j++)
                if(i!=j)
                    temp.push_back(val[j]);
            if(val.size()-1>0)
                findper(res,temp,a);
            else
                res.push_back(a);
            a.resize(a.size()-1);
            temp.resize(0);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        int size=1;
        vector<vector<int>> res;
        vector<int> a;
        a.reserve(nums.size());
        for(int i=nums.size();i>0;i--)
            size*=i;
        res.reserve(size);
        if(nums.size()>0)
            findper(res,nums,a);
        else
            res.push_back(a);
        return res;
    }
};
