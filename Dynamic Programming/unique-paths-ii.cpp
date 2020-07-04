class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int flag=0,m=obstacleGrid.size(),n=obstacleGrid[0].size(),arr[m][n];
        for(int i=0;i<m;i++)
        {   
            if(obstacleGrid[i][0]==1)
                flag=1;
            if(flag==0)
                arr[i][0]=1;
            else
                arr[i][0]=0;   
        }
        flag=0;
        for(int i=0;i<n;i++)
        {
            if(obstacleGrid[0][i]==1)
                flag=1;
            if(flag==0)
                arr[0][i]=1;
            else
                arr[0][i]=0;
        }
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
            {
                if(obstacleGrid[i][j]!=1)
                    arr[i][j]=arr[i-1][j]+arr[i][j-1];
                else
                    arr[i][j]=0;
            }
        return arr[m-1][n-1];  
    }
};