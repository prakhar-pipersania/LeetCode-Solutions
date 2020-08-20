// Without Using Stack
class Solution {
public:
    int strtonum(string s)
    {
        int num=0;
        for(int i=0;i<s.size();i++)
            num=(num*10)+(s[i]-'0');
        return num;
    }
    int calculate(string s) 
    {
        int start,num=0,flag=0,f=0;
        for(int i=0;i<s.size();)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                start=i;
                while(s[i]>='0'&&s[i]<='9'&&i<s.size())
                    i++;
                if(flag==0)
                    num+=strtonum(s.substr(start,i-start));
                else
                    num-=strtonum(s.substr(start,i-start));
            }
            else if(s[i]=='+')
                flag=0,i++;
            else if(s[i]=='-')
                flag=1,i++;
            else if(s[i]=='(')
            {
                f=1;
                start=i+1;
                while(f!=0&&i<s.size())
                {
                    i++;
                    if(s[i]=='(')
                        f++;
                    else if(s[i]==')')
                        f--;
                }
                if(flag==0)
                    num+=calculate(s.substr(start,i-start));
                else
                    num-=calculate(s.substr(start,i-start));
                i++;
            }
            else
                i++;
        }
        return num;    
    }
};
