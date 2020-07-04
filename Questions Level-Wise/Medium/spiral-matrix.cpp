class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int cstart=0,cend=matrix.size();
        vector<int> a;
        if(cend==0)
            return a;
        int rstart=0,rend=matrix[0].size(),v=rend*cend;
        a.reserve(v);
        while(1)
        {
            for(int i=cstart,j=rstart;j<rend;j++)
                a.push_back(matrix[i][j]);
            cstart++;
            if(a.size()==v)break;
            for(int i=cstart,j=rend-1;i<cend;i++)
                a.push_back(matrix[i][j]);
            rend--;
            if(a.size()==v)break;
            for(int i=cend-1,j=rend-1;j>=rstart;j--)
                a.push_back(matrix[i][j]);
            cend--;
            if(a.size()==v)break;
            for(int i=cend-1,j=rstart;i>=cstart;i--)
                a.push_back(matrix[i][j]);
            rstart++;
            if(a.size()==v)break;
        }
        return a;
    }
};
