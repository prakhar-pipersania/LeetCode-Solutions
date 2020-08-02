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
            while(i+1<val.size()&&val[i]==val[i+1])
                i++;
            a.resize(a.size()-1);
            temp.resize(0);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        vector<vector<int>> res;
        vector<int> a;
        a.reserve(nums.size());
        sort(nums.begin(),nums.end());
        if(nums.size()>0)
            findper(res,nums,a);
        else
            res.push_back(a);
        return res;
    }
};