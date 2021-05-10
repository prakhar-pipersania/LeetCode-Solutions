class Solution {
public:
    int numSquares(int n) 
    {
        int len=sqrt(n),x[len][n+1];
        for(int j=0;j<=n;j++)
            x[0][j]=j;
        for(int i=1;i<len;i++)
        {
            int coin=(i+1)*(i+1);
            x[i][0]=0;
            for(int j=1;j<=n;j++)
                x[i][j]=(j>=coin?min(x[i-1][j],x[i][j-coin]+1):x[i-1][j]);
        }
        return x[len-1][n];
    }
};