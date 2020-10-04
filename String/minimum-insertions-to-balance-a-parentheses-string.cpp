class Solution {
public:
    int minInsertions(string s) 
    {
        int flag=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(flag<0)
                {
                    if(flag%2!=0)
                        flag--,c++;
                    c+=abs(flag/2);
                    flag=0;
                }
                if(flag%2==1)
                    c++,flag--;
                flag+=2;
            }
            else
                flag--;
        }
        if(flag>=0)
            c+=flag;
        else
        {
            if(flag%2!=0)
                flag--,c++;
            c+=abs(flag/2);
        }
        return c;
    }
};
