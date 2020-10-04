class Solution {
public:
    bool hasValidPath(vector<vector<int>>& grid) 
    {
        int i=0,j=0,flag,f,x=0,m=grid.size(),n=grid[0].size();
        while(1)
        {
            flag=f=0;
            if(i==m-1&&j==n-1)
                break;
            if(grid[i][j]==1)
            {
                if(j+1==n||grid[i][j+1]==2||grid[i][j+1]==4||grid[i][j+1]==6||grid[i][j+1]==0)
                    flag=1,f++;
                if(j-1<0||grid[i][j-1]==2||grid[i][j-1]==3||grid[i][j-1]==5||grid[i][j-1]==0)
                    flag=2,f++;
                if(f==2&&x==0)
                    return false;
                else if(f==2&&x==1)
                    grid[i][j]=0,i=j=0,grid[i][j]=4;
                else
                {
                    grid[i][j]=0;
                    flag==1?j--:j++;
                }
            }
            else if(grid[i][j]==2)
            {
                if(i+1==m||grid[i+1][j]==1||grid[i+1][j]==3||grid[i+1][j]==4||grid[i+1][j]==0)
                    flag=1,f++;
                if(i-1<0||grid[i-1][j]==1||grid[i-1][j]==5||grid[i-1][j]==6||grid[i-1][j]==0)
                    flag=2,f++;
                if(f==2&&x==0)
                    return false;
                else if(f==2&&x==1)
                    grid[i][j]=0,i=j=0,grid[i][j]=4;
                else
                {
                    grid[i][j]=0;
                    flag==1?i--:i++;
                }
            }
            else if(grid[i][j]==3)
            {
                if(j-1<0||grid[i][j-1]==2||grid[i][j-1]==3||grid[i][j-1]==5||grid[i][j-1]==0)
                    flag=2,f++;
                if(i+1==m||grid[i+1][j]==1||grid[i+1][j]==3||grid[i+1][j]==4||grid[i+1][j]==0)
                    flag=1,f++;
                if(f==2&&x==0)
                    return false;
                else if(f==2&&x==1)
                    grid[i][j]=0,i=j=0,grid[i][j]=4;
                else
                {
                    grid[i][j]=0;
                    flag==1?j--:i++;
                }
            }
            else if(grid[i][j]==4)
            {
                if(i==0&&j==0)
                    x++,x%=2;
                if(j+1==n||grid[i][j+1]==2||grid[i][j+1]==4||grid[i][j+1]==6||grid[i][j+1]==0)
                    flag=1,f++;
                if(i+1==m||grid[i+1][j]==1||grid[i+1][j]==3||grid[i+1][j]==4||grid[i+1][j]==0)
                    flag=2,f++;
                if(f==2&&x==0)
                    return false;
                else
                {
                    grid[i][j]=0;
                    flag==1?i++:j++;
                }
            }
            else if(grid[i][j]==5)
            {
                if(i-1<0||grid[i-1][j]==1||grid[i-1][j]==5||grid[i-1][j]==6||grid[i-1][j]==0)
                    flag=1,f++;
                if(j-1<0||grid[i][j-1]==2||grid[i][j-1]==3||grid[i][j-1]==5||grid[i][j-1]==0)
                    flag=2,f++;
                if(f==2&&x==0)
                    return false;
                else if(f==2&&x==1)
                    grid[i][j]=0,i=j=0,grid[i][j]=4;
                else
                {
                    grid[i][j]=0;
                    flag==1?j--:i--;
                }
            }
            else
            {
                if(j+1==n||grid[i][j+1]==2||grid[i][j+1]==4||grid[i][j+1]==6||grid[i][j+1]==0)
                    flag=1,f++;
                if(i-1<0||grid[i-1][j]==1||grid[i-1][j]==5||grid[i-1][j]==6||grid[i-1][j]==0)
                    flag=2,f++;
                if(f==2&&x==0)
                    return false;
                else if(f==2&&x==1)
                    grid[i][j]=0,i=j=0,grid[i][j]=4;
                else
                {
                    grid[i][j]=0;
                    flag==1?i--:j++;
                }
            }
        }
        return true;
    }
};
