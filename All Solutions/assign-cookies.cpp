class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        int c=0,k=0;
        sort(begin(g),end(g));
        sort(begin(s),end(s));
        for(int i=0;i<s.size();i++)
            if(g[k]<=s[i])
            {
                ++c,++k;
                if(k==g.size())
                    return c;
            }
        return c;
    }
};