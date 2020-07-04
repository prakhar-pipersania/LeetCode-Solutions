class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int n=triangle.size(),min=INT_MAX;
        for(int i=1;i<n;i++)
        {
            triangle[i][0]+=triangle[i-1][0];
            triangle[i][triangle[i].size()-1]+=triangle[i-1][triangle[i-1].size()-1];
        }
        if(n>2)
        {
            for(int i=2;i<n;i++)
            {
                for(int j=1;j<triangle[i].size()-1;j++)
                {
                    if(triangle[i-1][j-1]<=triangle[i-1][j])
                        triangle[i][j]+=triangle[i-1][j-1];
                    else
                        triangle[i][j]+=triangle[i-1][j];
                }
            }
        }
        for(int i=0;i<triangle[n-1].size();i++)
            if(triangle[n-1][i]<min)
                min=triangle[n-1][i];
        return min;   
    }
};
