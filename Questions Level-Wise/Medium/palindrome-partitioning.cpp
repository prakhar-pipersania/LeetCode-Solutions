class Solution {
public:
    string reverse(string s)
    {
        for(int i=0,j=s.size()-1;i<j;i++,j--)
            s[i]^=s[j]^=s[i]^=s[j];
        return s;
    }
    void solve(string &s,vector<vector<string>> &x,vector<string> &a,int start)
    {
        if(start==s.size())
        {
            x.push_back(a);
            return;
        }
        for(int c=1;c<=s.size()&&start<s.size();c++)
        {
            if(s.substr(start,c)==reverse(s.substr(start,c)))
            {
                a.push_back(s.substr(start,c));
                solve(s,x,a,start+c);
                a.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> x;
        vector<string> a;
        solve(s,x,a,0);
        return x;
    }
};
