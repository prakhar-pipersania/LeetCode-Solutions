class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) 
    {
        vector<int> a;
        vector<char> x(n);
        for(int i=0;i<edges.size();i++)
            x[edges[i][1]]='1';
        for(int i=0;i<n;i++)
            if(x[i]!='1')
                a.push_back(i);
        return a;
    }
};
