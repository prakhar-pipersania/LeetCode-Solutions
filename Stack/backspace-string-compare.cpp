class Solution {
public:
    bool backspaceCompare(string S, string T) 
    {
        string s1;
        string s2;
        for(int i=0;S[i]!='\0';i++)
        {
            if(S[i]!='#')
                s1+=S[i];
            if(S[i]=='#'&&s1.size()>0)
                s1.resize(s1.size()-1);
        }
        for(int i=0;T[i]!='\0';i++)
        {
            if(T[i]!='#')
                s2+=T[i];
            if(T[i]=='#'&&s2.size()>0)
                s2.resize(s2.size()-1);
        }
        if(s1.size()!=s2.size())
            return false;
        for(int i=0;s1[i]!='\0';i++)
            if(s1[i]!=s2[i])
                return false;
        return true;
    }
};
