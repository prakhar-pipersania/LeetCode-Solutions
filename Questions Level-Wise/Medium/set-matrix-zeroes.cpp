class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        unordered_set<int> row,col;
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[i].size();j++)
                if(matrix[i][j]==0)
                    row.insert(i),col.insert(j);
        for(auto e: row)
            for(int i=0;i<matrix[e].size();i++)
                matrix[e][i]=0;
        for(auto e: col)
            for(int i=0;i<matrix.size();i++)
                matrix[i][e]=0;
    }
};
