class Solution {
public:
    void getcomponent(string &a,short &r,short &i)
    {
        bool s1=1,s2=1,flag=1;
        if(a[0]=='-')
            s1=0;
        for(int j=1^s1;j<a.size();j++)
        {
            if(flag)
            {
                if(a[j]=='+')
                    flag=0;
                else
                    r=(r*10)+(a[j]-48);
            }
            else
            {
                if(a[j]=='-')
                    s2=0;
                else if(a[j]!='i')
                    i=(i*10)+(a[j]-48);  
            }
        }
        if(!s1)
            r*=-1;
        if(!s2)
            i*=-1;
    }
    string complexNumberMultiply(string a, string b) 
    {
        short r1=0,i1=0,r2=0,i2=0;
        getcomponent(a,r1,i1);
        getcomponent(b,r2,i2);
        a=to_string((r1*r2)+((i1*i2)*-1))+"+";
        a+=to_string((r1*i2)+(i1*r2))+"i";
        return a;
    }
};