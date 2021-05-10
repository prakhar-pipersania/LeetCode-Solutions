class Solution {
public:
    void solve(vector<int> &x,int &n,int sum,int start,bool &t)
    {
        if(sum==n)
            t=true;
        for(int i=start;!t&&i<x.size();i++)
        {
            solve(x,n,sum+x[i],i+1,t);
        }
    }
    bool checkPowersOfThree(int n) 
    {
        bool t=false;
        if(n==1)
            return true;
        vector<int> x(1,1);    
        for(int i=0;x[x.size()-1]<n;i++)
        {
            x.push_back(x[x.size()-1]*3);
            if(x[x.size()-1]==n)
                return true;
        }
        if(x[x.size()-1]>n)
            x.pop_back();
        solve(x,n,0,0,t);
        return t;
    }
};