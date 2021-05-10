class Solution {
public:
    bool canChoose(vector<vector<int>>& groups, vector<int>& nums) 
    {
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            int j=0;
            for(int k=i;j<groups[c].size()&&nums[k]==groups[c][j];j++,k++);
            if(j==groups[c].size())
            {
                c++,i+=j-1;
                if(c==groups.size())
                    return true;
            }
        }
        return false;
    }
};