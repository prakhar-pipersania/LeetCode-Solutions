class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) 
    {
        if(adjacentPairs.size()==1)
            return adjacentPairs[0];
        bool flag=1;
        int k=1,ind;
        vector<int> a(adjacentPairs.size()+1);
        map<int,pair<int,int>> x;
        for(int i=0;i<adjacentPairs.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                if(x.find(adjacentPairs[i][j])==end(x))
                    x[adjacentPairs[i][j]].first=i,x[adjacentPairs[i][j]].second=INT_MAX;
                else
                    x[adjacentPairs[i][j]].second=i;
            }
        }
        for(auto e: x)
        {
            if(e.second.second==INT_MAX)
            {
                if(flag)
                {
                    a[0]=e.first;
                    flag=0;
                }
                else
                {
                    a[a.size()-1]=e.first;
                    break;
                }
            }
        }
        ind=x[a[k-1]].first;
        while(k+1<a.size())
        {
            a[k]=adjacentPairs[ind][0]^adjacentPairs[ind][1]^a[k-1];
            ind=ind^x[a[k]].first^x[a[k]].second;
            k++;
        }
        return a;
    }
};