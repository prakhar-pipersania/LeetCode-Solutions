class Solution {
public:
    void findsum(vector<vector<int>> &res,vector<int> x,int k,int start,int sum,int target)
    {
        for(int i=start;i<10;i++)
        {
            x.push_back(i),sum+=i;
            if(sum==target&&x.size()==k)
                res.push_back(x);
            else if(sum<target&&x.size()<k)
                findsum(res,x,k,i+1,sum,target);
            x.pop_back(),sum-=i;
        }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> res;
        vector<int> x;
        findsum(res,x,k,1,0,n);
        return res;
    }
};
