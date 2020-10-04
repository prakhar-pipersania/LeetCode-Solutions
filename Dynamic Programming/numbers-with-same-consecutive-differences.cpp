class Solution {
public:
    void gen(vector<int> &x,int n,int k,int i,int num)
    {
        if(n==0)
            x.push_back(num);
        else if(i>=0&&i<10)
        {
            gen(x,n-1,k,i+k,(num*10)+i);
            if(n-1!=0&&k!=0)
                gen(x,n-1,k,i-k,(num*10)+i);
        }
    }
    vector<int> numsSameConsecDiff(int N, int K) 
    {
        vector<int> x;
        if(N==1)
            return {0,1,2,3,4,5,6,7,8,9};
        for(int j=1;j<10;j++)
        {
            gen(x,N-1,K,j+K,j);
            if(K!=0)
                gen(x,N-1,K,j-K,j);
        }
        return x;
    }
};
