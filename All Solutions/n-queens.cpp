class Solution {
public:
    void gen(vector<int> &done,vector<string> subx,vector<vector<string>> &x,int cur)
    {
        int temp;
        vector<int> t(subx.size());
        if(cur==t.size())
            x.push_back(subx);
        for(int i=0;i<done.size();i++)
        {
            t[done[i]]=1;
            temp=done[i]-cur+i;
            if(temp>=0)
                t[temp]=1;
            temp=done[i]+cur-i;
            if(temp<t.size())
                t[temp]=1;
        }
        for(int i=0;i<subx.size();i++)
            if(t[i]==0)
                done.push_back(i),subx[cur][i]='Q',gen(done,subx,x,cur+1),done.pop_back(),subx[cur][i]='.';
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        if(n==0)
            return {{}};
        if(n==2||n==3)
            return {};
        string a="";
        vector<int> done;
        vector<string> subx(n);
        vector<vector<string>> x;
        for(int i=0;i<n;i++)
            a+='.';
        for(int i=0;i<n;i++)
            subx[i]=a;
        gen(done,subx,x,0);
        return x;
    }
};
