class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int n=matrix.size(),m;
        if(n>1)
        {
            for(int i=n-2;i>=0;i--)
            {
                for(int j=0;j<n;j++)
                {
                    m=matrix[i+1][j];
                    if(j-1>=0)
                        m=min(m,matrix[i+1][j-1]);
                    if(j+1<n)
                        m=min(m,matrix[i+1][j+1]);
                    matrix[i][j]+=m;
                }
            }
        }
        m=matrix[0][0];
        for(int i=1;i<n;i++)
            m=min(m,matrix[0][i]);
        return m;
    }
};