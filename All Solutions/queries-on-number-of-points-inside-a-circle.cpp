class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) 
    {
        vector<int> x(q.size());
        for(int i=0;i<q.size();i++)
        {
            for(int j=0;j<p.size();j++)
            {
                if(sqrt(pow(q[i][0]-p[j][0],2)+pow(q[i][1]-p[j][1],2))<=q[i][2])
                    x[i]++;
            }
        }
        return x;
    }
};