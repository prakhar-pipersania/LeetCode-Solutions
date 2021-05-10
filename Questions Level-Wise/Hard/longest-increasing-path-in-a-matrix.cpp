class Solution {
public:
    void print(vector<vector<int>> &x)
    {
        for(auto e: x)
        {
            for(auto e1: e)
                cout<<e1<<" ";
            cout<<endl;
        }
    }
    void findpath(vector<vector<int>>& mat, vector<vector<int>>& v, int &r, int &c, int &m, int i, int j,int cv)
    {
        v[i][j]=max(v[i][j],cv);
        m=max(m,v[i][j]);
        cv++;
        if(i-1>=0&&mat[i-1][j]>mat[i][j]&&v[i-1][j]<cv)
            findpath(mat,v,r,c,m,i-1,j,cv);
        if(i+1<r&&mat[i+1][j]>mat[i][j]&&v[i+1][j]<cv)
            findpath(mat,v,r,c,m,i+1,j,cv);
        if(j-1>=0&&mat[i][j-1]>mat[i][j]&&v[i][j-1]<cv)
            findpath(mat,v,r,c,m,i,j-1,cv);
        if(j+1<c&&mat[i][j+1]>mat[i][j]&&v[i][j+1]<cv)
            findpath(mat,v,r,c,m,i,j+1,cv);
    }
    int longestIncreasingPath(vector<vector<int>>& mat) 
    {
        int m=1,r=mat.size(),c=mat[0].size();
        vector<vector<int>> v(r,vector<int> (c));
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                if(!v[i][j])
                    findpath(mat,v,r,c,m,i,j,1);
        //print(v);
        return m;
    }
};