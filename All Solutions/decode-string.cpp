class Solution {
public:
    string decodeString(string s) 
    {
        int x,flag=0,start=-1,end=-1;
        string res,temp;
        for(int i=0;s[i]!='\0';)
        {
            x=0;
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
                while((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                {
                    res+=s[i],i++;
                    if(s[i]=='\0')
                        break;
                }
            }
            else
            {
                for(;s[i]>='0'&&s[i]<='9';i++)
                    x=(x*10)+(s[i]-48);
                if(s[i]=='[')
                {
                    i++,start=i,flag++;
                    while(flag!=0)
                    {
                        if(s[i]=='[')
                            flag++;
                        else if(s[i]==']')
                            flag--;
                        end=i;
                        i++;
                    }
                }
                temp=decodeString(s.substr(start,end-start));
                for(int i=0;i<x;i++)
                    res+=temp;
            }   
        }
        return res;    
    }
};