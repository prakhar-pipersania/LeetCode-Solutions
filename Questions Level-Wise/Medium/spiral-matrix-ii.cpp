class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> matrix;
        if(n==0)
            return matrix;
        int v=1,flag=0,cstart=0,cend=n,rstart=0,rend=n;
        vector<int> row(n,0);
        matrix.reserve(n);
        for(int i=0;i<n;i++)
            matrix.push_back(row);
        while(flag!=1)
        {
            for(int i=cstart,j=rstart;j<rend&&flag!=1;j++,v++)
            {
                matrix[i][j]=v;
                if(v==n*n){flag=1;break;}
            }
            cstart++;
            for(int i=cstart,j=rend-1;i<cend&&flag!=1;i++,v++)
            {
                matrix[i][j]=v;
                if(v==n*n){flag=1;break;}
            }
            rend--;
            for(int i=cend-1,j=rend-1;j>=rstart&&flag!=1;j--,v++)
            {
                matrix[i][j]=v;
                if(v==n*n){flag=1;break;}
            }
            cend--;
            for(int i=cend-1,j=rstart;i>=cstart&&flag!=1;i--,v++)
            {
                matrix[i][j]=v;
                if(v==n*n){flag=1;break;}
            }
            rstart++;
        }
        return matrix;   
    }
};
