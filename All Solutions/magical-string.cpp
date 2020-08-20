class Solution {
public:
    int magicalString(int n) 
    {
        string s="12",x="";
        int i=0,num,c=0;
        while(n>x.size())
        {
            num=s[i]-'0';
            while(num--)
                x+=s[i%2];
            if(i+1==s.size()&&n!=x.size())
                s=x;
            i++;
        }
        for(int i=0;i<n;i++)
            if(x[i]=='1')
                c++;
        return c;
    }
};
