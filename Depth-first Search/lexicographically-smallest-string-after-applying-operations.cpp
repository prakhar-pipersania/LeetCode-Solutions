class Solution {
public:
    string rotate(string s,int b)
    {
        reverse(begin(s),end(s));
        reverse(begin(s),begin(s)+b);
        reverse(begin(s)+b,end(s));
        return s;
    }
    string add(string s,int a)
    {
        for(int i=1;i<s.size();i+=2)
            s[i]=(((s[i]-'0')+a)%10)+'0';
        return s;
    }
    void solve(unordered_set<string> &x,string s, int &a, int &b,string &res) 
    {
        string temp;
        temp=add(s,a);
        if(temp<res)
            res=temp;
        if(x.find(temp)==end(x))
            x.insert(temp),solve(x,temp,a,b,res);
        temp=rotate(s,b);
        if(temp<res)
            res=temp;
        if(x.find(temp)==end(x))
            x.insert(temp),solve(x,temp,a,b,res);
    }
    string findLexSmallestString(string s, int a, int b) 
    {
        string res=s;
        unordered_set<string> x;
        solve(x,s,a,b,res);
        return res;
    }
};
