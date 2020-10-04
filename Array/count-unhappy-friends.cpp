class Solution {
public:
    int unhappyFriends(int n, vector<vector<int>>& prefer, vector<vector<int>>& pairs) 
    {
        int c=0;
        for(int i=0;i<pairs.size();i++)
        {
            for(int j=0;j<n-1;j++)
                if(prefer[pairs[i][0]][j]==pairs[i][1])
                {
                    prefer[pairs[i][0]].resize(j);
                    break;
                }
            for(int j=0;j<n-1;j++)
                if(prefer[pairs[i][1]][j]==pairs[i][0])
                {
                    prefer[pairs[i][1]].resize(j);
                    break;
                }
        }
        for(int i=0;i<n;i++)
        {
            for(int flag=0,j=0;j<prefer[i].size();j++)
            {
                for(int t=prefer[i][j],k=0;k<prefer[t].size();k++)
                {
                    if(prefer[t][k]==i)
                    {
                        c++;
                        flag=1;
                        break;
                    }
                }
                if(flag)
                    break;   
            }
        }
        return c;
    }
};
