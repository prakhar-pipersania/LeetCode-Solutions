class Solution {
public:
    int countPairs(vector<int>& d) 
    {
        vector<int> y={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152};
        int c=0,t=0;
        map<int,int> x;
        for(auto e: d)
            x[e]++;
        for(auto e: x)
        {
            t=2*e.first;
            if(e.first!=0&&e.second>1&&(!(t&(t-1))))
                c=(c+(((long)e.second*((long)e.second-1)/2)))%1000000007;
            for(auto e1: y)
                if(e1>e.first&&e1-e.first!=e.first&&x.find(e1-e.first)!=end(x))
                    c=(c+((long)e.second*(long)x[e1-e.first]))%1000000007;
            x.erase(e.first);
        }
        return c;
    }
};