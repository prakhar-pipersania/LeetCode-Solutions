class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int n=mat.size(),sum=0;
        if(n==1)
            return mat[0][0];
        for(int i=0;i<n;i++)
            sum+=mat[i][i];
        for(int i=n-1,j=0;i>=0;i--,j++)
            sum+=mat[i][j];
        if(n%2==1)
            sum-=mat[n/2][n/2];
        return sum;
    }
};
