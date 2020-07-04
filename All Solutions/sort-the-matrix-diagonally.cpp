class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        int m=mat.size(),n=mat[0].size(),v=1;
        vector<int> a;
        for(int i=m-1;i>=0;i--,v++)
        {
            for(int j=0,temp=i;j<v&&j<n;j++,temp++)
                a.push_back(mat[temp][j]);
            sort(a.begin(),a.end());
            for(int j=0,temp=i;j<v&&j<n;j++,temp++)
                mat[temp][j]=a[j];
            a.resize(0);
        }
        for(int j=1;j<n;j++)
        {
            for(int i=0,temp=j;i<m&&temp<n;i++,temp++)
                a.push_back(mat[i][temp]);
            sort(a.begin(),a.end());
            for(int i=0,temp=j;i<m&&temp<n;i++,temp++)
                mat[i][temp]=a[i];
            a.resize(0);
        }
        return mat;
    }
};
