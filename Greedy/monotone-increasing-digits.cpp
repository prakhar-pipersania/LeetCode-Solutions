class Solution {
public:
    void solve(string lastch,string Nstr,int cur,int &N,bool &flag)
    {
        if(cur==Nstr.size())
        {
            if(stoi(lastch)<=stoi(Nstr))
                N=stoi(lastch),flag=true;
        }
        else
        {
            for(int i=9;i>=(lastch.back()-'0')&&flag==false;i--)
                solve(lastch+to_string(i),Nstr,cur+1,N,flag);
        }
    }
    int monotoneIncreasingDigits(int N) 
    {
        if(N<10)
            return N;
        string x=to_string(N);
        N=0;
        for(int i=1;i<x.size();i++)
            if(x[i]>=x[i-1])
                N++;
        if(N+1==x.size())
            return stoi(x);
        N=0;
        bool flag=false;
        for(int i=(x[0]-'0');i>=0;i--)
            solve(to_string(i),x,1,N,flag);
        return N;
    }
};
