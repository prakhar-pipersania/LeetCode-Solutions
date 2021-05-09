class Solution {
public:
    int n(string &s,int j)
    {
        int t=0;
        while(s[j]>='0'&&s[j]<='9'||s[j]==' ')
        {
            if(s[j]!=' ')
                t=(t*10)+(s[j]-'0');
            ++j;
            if(j==s.size())
                break;
        }
        return t;
    }
    int calculate(string s) 
    {
        bool f=true;
        int num=0,t,j,k;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='/'||s[i]=='*')
            {
                t=0,j=i+1,k=i-1;
                while(s[j]>='0'&&s[j]<='9'||s[j]==' ')
                {
                    if(s[j]!=' ')
                        t=(t*10)+(s[j]-'0');
                    ++j;
                    if(j==s.size())
                        break;
                }
                while(s[k]>='0'&&s[k]<='9'||s[k]==' ')
                {
                    --k;
                    if(k<0)
                        break;
                }
                s=s.substr(0,k+1)+to_string(s[i]=='/'?(n(s,k+1)/t):(n(s,k+1)*t))+s.substr(j,s.size()-j);
                i=k;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            t=0;
            while(s[i]!='+'&&s[i]!='-')
            {
                if(s[i]!=' ')
                    t=(t*10)+(s[i]-'0');
                ++i;
                if(i==s.size())
                    break;
            }
            num=(f?num+t:num-t);
            f=(s[i]=='+'?1:0);
        }
        return num;
    }
};
