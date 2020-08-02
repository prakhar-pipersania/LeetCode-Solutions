class Solution {
public:
    void findcom(vector<vector<int>> &a,vector<int> x,int n,int k)
    {
        for(int i=x[x.size()-1]+1;i<=n;i++)
        {
            x.push_back(i);
            if(x.size()==k)
                a.push_back(x);
            else
                findcom(a,x,n,k);
            x.resize(x.size()-1);
        }
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>> a;
        vector<int> x;
        if(k==0)
            a.push_back(x);
        else if(k<=n)
        {
            for(int i=0;i<=n-k;i++)
            {
                x.push_back(i+1);
                findcom(a,x,n,k);
                if(x.size()==k)
                    a.push_back(x);   
                x.resize(0);
            }
        }
        return a;
    }
};
