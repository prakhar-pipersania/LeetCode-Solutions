class Solution {
public:
    string reverseParentheses(string s) 
    {
        int flag=0,start=-1,end=-1;
        string res,temp;
        for(int i=0;s[i]!='\0';)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                while(s[i]!='\0'&&s[i]>='a'&&s[i]<='z')
                    res+=s[i],i++;
            }
            else
            {
                if(s[i]=='(')
                {
                    i++,start=i,flag++;
                    while(flag!=0)
                    {
                        if(s[i]=='(')
                            flag++;
                        else if(s[i]==')')
                            flag--;
                        end=i;
                        i++;
                    }
                }
                temp=s.substr(start,end-start);
                reverse(temp.begin(),temp.end());
                for(int i=0;i<temp.size();i++)
                {
                    if(temp[i]=='(')
                        temp[i]=')';
                    else if(temp[i]==')')
                        temp[i]='(';
                }
                res+=reverseParentheses(temp);
            }   
        }
        return res; 
    }
};
