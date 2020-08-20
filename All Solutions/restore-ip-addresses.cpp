class Solution {
public:
    void gen(vector<string> &genstr,string s,int dot,int index)
    {
        int num=0,flag=0;
        if(dot==0)
        {
            for(int i=index;i<s.size();i++)
                num=(num*10)+(s[i]-'0');
            if((s[index]!='0'&&num<=255)||(s[index]=='0'&&index+1==s.size()&&num<=255))
                genstr.push_back(s);
        }
        else
        {
            if(s[index]=='0')
                flag=1;
            for(int i=index;i<s.size()-1;i++)
            {
                num=(num*10)+(s[i]-'0');
                if(num<=255)
                {
                    gen(genstr,s.substr(0,i+1)+"."+s.substr(i+1,s.size()-(i+1)),dot-1,i+2);
                    if(flag==1)
                        break;
                }
                else
                    break;
            }
        }
    }
    vector<string> restoreIpAddresses(string s) 
    {
        if(s.size()>12||s.size()<4)
            return {};
        vector<string> genstr;
        gen(genstr,s,3,0);
        return genstr;
    }
};
