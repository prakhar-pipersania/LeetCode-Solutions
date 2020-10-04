class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) 
    {
        int i,sum=0;
        vector<int> x(201);
        for(auto e: A)
            x[e+100]++;
        while(K)
        {
            for(i=0;x[i]<1;i++);
            x[200-i]++,x[i]--,K--;
        }
        for(i=0;i<x.size();i++)
            sum+=(x[i]*(i-100));
        return sum;
    }
};
