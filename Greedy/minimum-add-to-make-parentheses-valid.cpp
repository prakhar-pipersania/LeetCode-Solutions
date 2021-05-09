class Solution {
public:
    int minAddToMakeValid(string S) 
    {
        short c=0,flag=0;
        for(auto e:S)
        {
            if(e=='(')
            {
                if(flag<0)
                    c+=abs(flag),flag=0;
                ++flag;
            }
            else
            {
                --flag;
            }
        }
        if(flag)
            c+=abs(flag);
        return c;
    }
};
