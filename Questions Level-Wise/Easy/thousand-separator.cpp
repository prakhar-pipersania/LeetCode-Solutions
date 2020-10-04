class Solution {
public:
    string thousandSeparator(int n) 
    {
        if(n<1000)
            return(to_string(n));
        int i=0;
        string s="";
        while(n>0)
        {
            s+='0'+n%10;
            i++,n/=10;
            if(i==3)
                s+='.',i=0;
        }
        if(s[s.size()-1]=='.')
            s.resize(s.size()-1);
        reverse(s.begin(),s.end());
        return s;
    }
};
