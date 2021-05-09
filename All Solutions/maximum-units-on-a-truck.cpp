class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b)
    {
        if(a[1]!=b[1])
            return (a[1]>b[1]);
        return (a[0]>b[0]);
    }
    int maximumUnits(vector<vector<int>>& bt, int truckSize) 
    {
        int x=0,c=0;
        sort(begin(bt),end(bt),cmp);
        for(auto e: bt)
        {
            if(x+e[0]<=truckSize)
                x+=e[0],c+=e[0]*e[1];
            else
            {
                if(truckSize>x)
                    c+=(truckSize-x)*e[1],x+=(truckSize-x);
                break;
            }
        }
        return c;
    }
};