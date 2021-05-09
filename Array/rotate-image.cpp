class Solution {
public:
    void reverse(vector<int> &A,short &n)
    {
        for(short i=0,j=n-1;i<j;i++,j--)
            A[i]^=A[j]^=A[i]^=A[j];
    }
    void rotate(vector<vector<int>> &A) 
    {
        short n=size(A);
        for(short i=0;i<n;i++)
            for(short j=i;j<n;j++)
                if(i!=j)
                A[i][j]^=A[j][i]^=A[i][j]^=A[j][i];
        for(short i=0;i<n;i++)
            reverse(A[i],n);
    }
};
