class Solution {
public:
    string solve(string &s)
    {
        int k=-1,flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                s[++k]=')';
                flag++;
            }
            else if(s[i]==')')
            {
                if(flag>0)
                {
                    s[++k]='(';
                    flag--;
                }
            }
            else
            {
                s[++k]=s[i];
            }
        }
        s=s.substr(0,k+1);
        return s;
    }
    string minRemoveToMakeValid(string s) 
    {
        solve(s);
        reverse(s.begin(),s.end());
        solve(s);
        reverse(s.begin(),s.end());
        return s;
    }
};