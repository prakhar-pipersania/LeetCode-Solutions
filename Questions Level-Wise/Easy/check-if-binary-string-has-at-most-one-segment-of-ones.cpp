class Solution {
public:
    bool checkOnesSegment(string s) 
    {
        int p=0,q=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                p++;
            }
            else if(s[i]=='0')
            {
                q++;
                if(p>0)
                {
                    for(int j=0;i<s.size();i++)
                    {
                        if(s[i]=='1')
                        {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};