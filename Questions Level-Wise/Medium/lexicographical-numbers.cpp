class Solution {
public:
    int to_number(string &x)
    {
        int n=0;
        for(int i=0;i<x.size();i++)
            n=(n*10)+(x[i]-'0');
        return n;
    }
    vector<int> lexicalOrder(int n) 
    {
        vector<string> x(n);
        vector<int> y(n);
        for(int i=1;i<=n;++i)
            x[i-1]=to_string(i);
        sort(x.begin(),x.end());
        for(int i=0;i<x.size();++i)
            y[i]=to_number(x[i]);
        return y;
    }
};