class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        int m=matrix.size(),n=matrix[0].size(),v=1;
        vector<int> a;
        for(int i=m-1;i>=0;i--,v++)
        {
            for(int j=0,temp=i;j<v&&j<n;j++,temp++)
                a.push_back(matrix[temp][j]);
            for(auto e: a)
                if(e!=a[0])
                    return false;
            a.resize(0);
        }
        for(int j=1;j<n;j++)
        {
            for(int i=0,temp=j;i<m&&temp<n;i++,temp++)
                a.push_back(matrix[i][temp]);
            for(auto e: a)
                if(e!=a[0])
                    return false;
            a.resize(0);
        }
        return true;    
    }
};
