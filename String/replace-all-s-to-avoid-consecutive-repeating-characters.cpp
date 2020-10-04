class Solution {
public:
    string modifyString(string s) 
    {
        int j=0;
        string S="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='?')
            {
                if((i>0&&S[j%26]!=s[i+1]&&S[j%26]!=s[i-1])||(i==0&&S[j%26]!=s[i+1]))
                    s[i]=S[j%26],j++;
                else
                    j++,i--;
            }
        }
        if(s[s.size()-1]=='?')
        {
            if(s.size()==1)
                s[s.size()-1]='a';
            else
            {
                if(s[s.size()-2]+1<='z')
                    s[s.size()-1]=s[s.size()-2]+1;
                else
                    s[s.size()-1]=s[s.size()-2]-1;
            }
        }
        return s;
    }
};
