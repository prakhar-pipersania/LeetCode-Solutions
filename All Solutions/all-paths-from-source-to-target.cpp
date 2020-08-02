class Solution {
public:
    void path(vector<vector<int>> graph,vector<vector<int>> &x,vector<int> a,int cur)
    {
        if(a.back()==graph.size()-1)
            x.push_back(a);
        else
            for(int i=0;i<graph[cur].size();i++)
            {
                a.push_back(graph[cur][i]);
                path(graph,x,a,graph[cur][i]);
                a.pop_back();
            }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        vector<int> a(1);
        vector<vector<int>> x;
        path(graph,x,a,0);
        return x;
    }
};
