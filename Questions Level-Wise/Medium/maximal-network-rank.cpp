class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) 
    {
        int c=0,val;
        set<pair<int,int>> a;
        map<int,int> x;
        for(auto e: roads)
            x[e[0]]++,x[e[1]]++,a.insert({e[0],e[1]});
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(i!=j)
                {
                    val=x[i]+x[j];
                    if(a.find({i,j})!=end(a)||a.find({j,i})!=end(a))
                        val--;
                    c=max(c,val);
                }
        return c;
    }
};
