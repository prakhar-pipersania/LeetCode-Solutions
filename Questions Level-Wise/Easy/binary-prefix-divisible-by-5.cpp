class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) 
    {
        int n=0;
        vector<bool> x(A.size());
        for(int i=0;i<A.size();i++)
        {
            n=2*(n%5)+A[i];
            if(!(n%5))
                x[i]=1;
        }
        return x;
    }
};
