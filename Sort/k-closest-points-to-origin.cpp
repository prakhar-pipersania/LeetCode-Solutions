class Solution {
public:
    static bool cmp(vector<int> &x,vector<int> &y)
    {
        double a=pow(x[0],2)+pow(x[1],2),b=pow(y[0],2)+pow(y[1],2);
        return (a<b);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        if(points.size()==k)
            return points;
        sort(points.begin(),points.end(),cmp);
        points.resize(k);
        return points;
    }
};