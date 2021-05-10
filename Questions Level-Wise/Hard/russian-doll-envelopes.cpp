class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) 
    {
        int c=1,size=envelopes.size();
        vector<int> x(size,1);
        sort(envelopes.begin(),envelopes.end(),greater<>());
        for(int i=size-2;i>=0;i--)
            for(int j=i+1;j<size;j++)
                if(envelopes[i][0]>envelopes[j][0]&&envelopes[i][1]>envelopes[j][1])
                    x[i]=max(x[i],x[j]+1);
        for(auto e: x)
            c=max(c,e);
        return c;
    }
};