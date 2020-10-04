class Solution {
public:
    int removePalindromeSub(string s) 
    {
        if(!s.size())
            return 0;
        bool c=false;
        for(int i=0,j=s.size()-1;i<j;i++,j--)
            if(s[i]!=s[j])
            {
                c=true;
                break;
            }
        return c==false?1:2;
    }
};
