class Solution {
public:
    int numSpecial(vector<vector<int>>& mat)
    {
        int count=0;
        vector<int> x(mat.size()),y(mat[0].size());
        for(int i=0;i<mat.size();i++)
            for(int j=0;j<mat[i].size();j++)
                x[i]+=mat[i][j];
        for(int j=0;j<mat[0].size();j++)
            for(int i=0;i<mat.size();i++)
                y[j]+=mat[i][j];
        for(int i=0;i<mat.size();i++)
            if(x[i]==1)
                for(int j=0;j<mat[i].size();j++)
                    if(mat[i][j]==1&&y[j]==1)
                        count++;
        return count;
    }
};
