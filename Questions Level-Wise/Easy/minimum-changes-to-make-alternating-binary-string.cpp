class Solution {
public:
    int minOperations(string s) 
    {
        int f0=0,f1=0;
        int l0=0,l1=0;
        for(int i=0;i<s.size();i+=2)
        {
            if(s[i]=='0')
            {
                f0++;
            }
            else
            {
                f1++;
            }
        }
        for(int i=1;i<s.size();i+=2)
        {
            if(s[i]=='0')
            {
                l0++;
            }
            else
            {
                l1++;
            }
        }
        f0=f0+l1;
        f1=f1+l0;
        return min(f0,f1);
    }
};