class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) 
    {
        int m=r.size(),flag;
        vector<int> temp;
        vector<bool> x(m);
        for(int i=0;i<m;i++)
        {
            for(int j=l[i];j<=r[i];j++)
                temp.push_back(nums[j]);
            sort(temp.begin(),temp.end());
            if(r[i]-l[i]>0)
            {
                flag=1;
                for(int i=0;i<temp.size()-1;i++)
                    if(temp[i+1]-temp[i]!=temp[1]-temp[0])
                        flag=0;
                if(flag)
                    x[i]=true;
            }
            temp.resize(0);
        }
        return x;
    }
};
