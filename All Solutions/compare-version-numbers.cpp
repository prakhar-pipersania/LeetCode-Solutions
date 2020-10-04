class Solution {
public:
    void diff(string s,vector<uint32_t> &x)
    {
        uint32_t n=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='.')
                n=(n*10)+(s[i]-'0');
            else
                x.push_back(n),n=0;
        }
        if(n>0)
            x.push_back(n);
    }
    int compareVersion(string v1, string v2) 
    {
        int i=0,j=0;
        vector<uint32_t> x,y;
        diff(v1,x),diff(v2,y);
        while(i<x.size()&&j<y.size())
        {
            if(x[i]>y[j])
                return 1;
            else if(y[j]>x[i])
                return -1;
            i++,j++;
        }
        while(i<x.size())
        {
            if(x[i]>0)
                return 1;
            i++;
        }
        while(j<y.size())
        {
            if(y[j]>0)
                return -1;
            j++;
        }
        return 0;
    }
};
