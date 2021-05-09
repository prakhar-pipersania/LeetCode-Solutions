class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) 
    {
        int sum=0;
        map<int,int,greater<>> x;
        x[matrix[0][0]]++;
        for(int i=1;i<matrix[0].size();i++)
            matrix[0][i]=matrix[0][i-1]^matrix[0][i],x[matrix[0][i]]++;
        for(int i=1;i<matrix.size();i++)
            matrix[i][0]=matrix[i][0]^matrix[i-1][0],x[matrix[i][0]]++;
        for(int i=1;i<matrix.size();i++)
            for(int j=1;j<matrix[0].size();j++)
                matrix[i][j]=matrix[i][j]^matrix[i-1][j]^matrix[i][j-1]^matrix[i-1][j-1],x[matrix[i][j]]++;
        for(auto e: x)
        {
            sum+=e.second;
            if(sum>=k)
                return e.first;
        }
        return 0;
    }
};
