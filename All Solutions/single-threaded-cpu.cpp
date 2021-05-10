class Solution {
public:
    struct comp {
    bool operator()(vector<int> &x, vector<int> &y)
    {
        return (x[1]==y[1]?x[2]>y[2]:x[1]>y[1]);
    }};
    vector<int> getOrder(vector<vector<int>>& y) 
    {
        vector<int> x(y.size()),t;
        for(int i=0;i<y.size();i++)
            y[i].push_back(i);
        sort(y.begin(),y.end());
        priority_queue<vector<int>, vector<vector<int>>, comp> Q;
        int in,ind=0;
        long long time=y[0][0];
        Q.push(y[0]);
        for(in=1;in<y.size()&&y[in][0]==y[in-1][0];in++)
            Q.push(y[in]);
        while(ind<x.size())
        {
            if(Q.size())
            {
                t=Q.top();
                Q.pop();
                x[ind++]=t[2];
                time+=t[1];
            }
            else
            {
                time=y[in][0];
            }
            while(in<y.size()&&y[in][0]<=time)
                Q.push(y[in++]);
        }
        return x;
    }
};