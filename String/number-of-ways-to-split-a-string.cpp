class Solution {
public:
    int numWays(string s) 
    {
        int size;
        long long a,b,sum=0;
        vector<int> x;
        for(int i=0;i<s.size();i++)
            if(s[i]=='1')
                x.push_back(i);
        if(x.size()%3!=0)
            return 0;
        if(x.size()==0)
        {
            for(int i=1;i<s.size()-1;i++)
                sum=(sum+i)%1000000007;
            return sum;
        }
        size=x.size()/3;
        a=x[size]-x[size-1];
        b=x[2*size]-x[(2*size)-1];
        sum=(a*b)%1000000007;
        return sum;
    }
};
