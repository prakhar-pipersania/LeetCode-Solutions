class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int l,h,m;
        for(int i=0;i<matrix[0].size()&&i<matrix.size();i++)
        {
            l=i,h=matrix.size()-1;
            while(l<=h)
            {
                m=(l+h)/2;
                if(matrix[m][i]==target)
                    return true;
                else if(matrix[m][i]<target)
                    l=m+1;
                else
                    h=m-1;
            }
            l=i+1,h=matrix[0].size()-1;
            while(l<=h)
            {
                m=(l+h)/2;
                if(matrix[i][m]==target)
                    return true;
                else if(matrix[i][m]<target)
                    l=m+1;
                else
                    h=m-1;
            }
        }
        return false;
    }
};