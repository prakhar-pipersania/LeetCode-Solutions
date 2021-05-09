class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) 
    {
        short row=mat.size(),col=mat[0].size(),sr,sc,er,ec;
        vector<vector<int>> res(row,vector<int>(col));
        for(short i=1;i<row;i++)
            mat[i][0]+=mat[i-1][0];
        for(short i=1;i<col;i++)
            mat[0][i]+=mat[0][i-1];
        for(short i=1;i<row;i++)
            for(short j=1;j<col;j++)
                mat[i][j]+=mat[i-1][j]+mat[i][j-1]-mat[i-1][j-1];
        for(short i=0;i<row;i++)
        {
            for(short j=0;j<col;j++)
            {
                sr=max(i-K,0),sc=max(j-K,0),er=min(row-1,i+K),ec=min(col-1,j+K);
                res[i][j]=mat[er][ec];
                if(sr>0&&sc>0)
                    res[i][j]-=mat[sr-1][ec]+mat[er][sc-1]-mat[sr-1][sc-1];
                else if(sr>0)
                    res[i][j]-=mat[sr-1][ec];
                else if(sc>0)
                    res[i][j]-=mat[er][sc-1];
            }
        }
        return res;
    }
};
