class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& A, vector<int>& B) 
    {
        if(!A.size())
            return {B};
        bool used=0;
        int k=-1;
        vector<vector<int>> x;
        for(int i=0;i<A.size();++i)
        {
            if(used)
            {
                if(A[i][0]>x[k][1])
                {
                    x.push_back(A[i]);
                    k++;
                }
                else if(A[i][0]==x[k][1])
                {
                    x[k][1]=A[i][1];
                }
                else
                {
                    if(A[i][1]>x[k][1])
                        x[k][1]=A[i][1];
                }
            }
            else
            {
                if(A[i][1]<B[0])
                {
                    x.push_back(A[i]);
                    ++k;
                }
                else if(A[i][1]==B[0])
                {
                    x.push_back({A[i][0],B[1]});
                    ++k;
                    used=1;
                }
                else
                {
                    used=1;
                    if(B[0]<A[i][0])
                    {
                        x.push_back(B);
                        ++k,--i;
                    }
                    else
                    {
                        x.push_back({A[i][0],max(B[1],A[i][1])});
                        ++k;
                    }
                }
            }
        }
        if(!used)
            x.push_back(B);
        return x;
    }
};
