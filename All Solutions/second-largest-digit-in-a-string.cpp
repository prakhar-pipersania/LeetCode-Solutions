class Solution {
public:
    int secondHighest(string s) 
    {
        bool n=false;
        vector<int> x(10);
        for(auto e: s)
        {
            if(e>='0'&&e<='9')
            {
                x[e-'0']++;
            }
        }
        for(int i=9;i>=0;i--)
        {
            if(x[i]>0)
            {
                if(n==false)
                {
                    n=true;
                }
                else
                {
                    return i;
                }
            }
        }
        return -1;
    }
};