class Solution {
public:
    int heightChecker(vector<int>& A) 
    {
        int c=0;
        vector<int> x=A;
        sort(x.begin(),x.end());
        for(int i=0;i<A.size();i++)
            if(A[i]!=x[i])
                c++;
        return c;
    }
};
