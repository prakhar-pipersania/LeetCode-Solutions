class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) 
    {
        short row=rowSum.size(),col=colSum.size();
        vector<vector<int>> m(row,vector<int>(col));
        for(short i=0;i<row;i++)
        {
            for(short j=0;j<col&&rowSum[i];j++)
            {
                int mini=min(rowSum[i],colSum[j]);
                m[i][j]=mini,rowSum[i]-=mini,colSum[j]-=mini;
            }
        }
        return m;
    }
};
