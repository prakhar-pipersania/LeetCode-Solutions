class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int c=0,flag;
        vector<int> x(26),y(26);
        for(auto e: allowed)
            x[e-'a']++;
        for(auto e: words)
        {
            flag=1;
            for(auto e1: e)
                y[e1-'a']++;
            for(int i=0;i<26;i++)
                if(x[i]>0)
                    y[i]=0;
            for(int i=0;i<26;i++)
                if(y[i]>0)
                    y[i]=0,flag=0;
            if(flag)
                c++;
        }
        return c;
    }
};
