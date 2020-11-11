class Solution {
public:
    int minDeletions(string s) 
    {
        int c=0;
        vector<int> x(26);
        unordered_map<int,int> y;
        for(auto e: s)
            x[e-'a']++;
        for(auto e: x)
            y[e]++;
        for(auto e=begin(y);e!=end(y);e++)
            while(e->first!=0&&e->second>1)
                for(int i=e->first-1;i>=0;i--)
                    if(!i||y.find(i)==end(y))
                    {
                        c+=e->first-i,e->second--,y[i]++;
                        break;
                    }
        return c;
    }
};
