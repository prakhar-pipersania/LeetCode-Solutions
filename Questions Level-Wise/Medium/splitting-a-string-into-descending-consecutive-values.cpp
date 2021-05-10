class Solution {
public:
    void print(vector<int> &x)
    {
        for(auto e: x)
            cout<<e<<" ";
        cout<<endl;
    }
    void backtrack(string &s,int start,vector<unsigned long long> &x,bool &flag)
    {
        if(x.size()>1&&start==s.size())
        {
            int i;
            for(i=1;i<x.size();i++)
                if(x[i-1]-x[i]!=1)
                    break;
            if(i==x.size())
                flag=1;
        }
        if(!flag&&start<s.size())
        {
            unsigned long long val=0;
            for(int i=start;i<s.size();i++)
            {
                val=(val*10)+(s[i]-'0');
                x.push_back(val);
                backtrack(s,i+1,x,flag);
                if(flag)
                    break;
                x.pop_back();
            }
        }
    }
    bool splitString(string s) 
    {
        bool flag=0;
        vector<unsigned long long> x;
        backtrack(s,0,x,flag);
        return flag;
    }
};