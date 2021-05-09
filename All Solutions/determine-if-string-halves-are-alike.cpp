class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        bool f=0;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i];
            if(f==0&&i>=s.size()/2)
                f=1;
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                (f?c--:c++);
        }
        return !c;
    }
};
