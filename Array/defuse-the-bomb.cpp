class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        int e,n=code.size();
        vector<int> x(n);
        if(k>0)
            for(int i=0;i<n;i++)
                for(int j=i+1;j<=i+k;j++)
                    x[i]+=code[j%n];
        if(k<0)
        {
            k*=-1;
            for(int i=0;i<n;i++)
            {
                e=(i+k)%n;
                for(int j=i;j<i+k;j++)
                    x[e]+=code[j%n];
            }
        }
        return x;
    }
};
