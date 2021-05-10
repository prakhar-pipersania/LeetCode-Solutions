class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) 
    {
        int m=0;
        vector<int> x(pairs.size(),1);
        sort(pairs.begin(),pairs.end());
        for(int i=pairs.size()-2;i>=0;i--)
            for(int j=i+1;j<pairs.size();j++)
                if(pairs[i][1]<pairs[j][0])
                    x[i]=max(x[i],x[j]+1);
        for(auto e: x)
            m=max(e,m);
        return m;
    }
};
