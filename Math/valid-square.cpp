class Solution {
public:
    bool check(int &x,int &y,int &z,int &a,int &b,int &c,int &d)
    {
        return ((x==y)&&(y==z)&&(a==b)&&(b==c)&&(c==d));
    }
    int dist(vector<int> &p1,vector<int> &p2)
    {
        int x=p1[0]-p2[0],y=p1[1]-p2[1];
        return ((x*x)+(y*y));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) 
    {
        if(p1==p2&&p2==p3&&p3==p4)
            return false;
        int x=dist(p1,p2),y=dist(p1,p3),z=dist(p1,p4);
        int a=dist(p2,p3),b=dist(p2,p4),c=dist(p3,p4);
        int m=max({x,y,z});
        return (check(m,x,c,y,z,a,b)||check(m,y,b,x,z,a,c)||check(m,z,a,x,y,b,c));
    }
};
