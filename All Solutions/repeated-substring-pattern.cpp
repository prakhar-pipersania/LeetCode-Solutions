class Solution {
public:
    bool repeatedSubstringPattern(string s) 
    {
        int i,c,xsize=1,ssize=s.size();
        for(string x;xsize<ssize;xsize++)
        {
            if((xsize!=ssize)&&(ssize%xsize==0))
            {
                x=s.substr(0,xsize);
                for(i=c=0;i<ssize&&x[i%xsize]==s[i];i++,c++){}
                if(c==ssize)
                    return true;
            }
        }
        return false;
    }
};
