class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) 
    {
        int sum,c;
        vector<vector<int>> x=M;
        for(int i=0;i<M.size();i++)
        {
            for(int j=0;j<M[i].size();j++)
            {
                sum=M[i][j],c=1;
                if(j-1>=0)
                    sum+=M[i][j-1],c++;
                if(j+1<M[i].size())
                    sum+=M[i][j+1],c++;
                if(i-1>=0)
                {
                    sum+=M[i-1][j],c++;
                    if(j-1>=0)
                        sum+=M[i-1][j-1],c++;
                    if(j+1<M[i].size())
                        sum+=M[i-1][j+1],c++;
                }
                if(i+1<M.size())
                {
                    sum+=M[i+1][j],c++;
                    if(j-1>=0)
                        sum+=M[i+1][j-1],c++;
                    if(j+1<M[i].size())
                        sum+=M[i+1][j+1],c++;
                }
                x[i][j]=sum/c;
            }
        }
        return x;
    }
};
