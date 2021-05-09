class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) 
    {
        vector<vector<int>> x;
        vector<int> res;
        for(short i=0;i<matrix.size();i++)
        {
            for(short j=0;j<matrix[i].size();j++)
            {
                if(i+j==x.size())
                    x.push_back({matrix[i][j]});
                else
                    x[i+j].push_back(matrix[i][j]);
            }
        }
        for(short i=0;i<x.size();i++)
        {
            if(i%2!=0)
            {
                for(short j=0;j<x[i].size();j++)
                    res.push_back(x[i][j]);
            }
            else
            {
                for(short j=x[i].size()-1;j>=0;j--)
                    res.push_back(x[i][j]);
            }
        }
        return res;
    }
};
