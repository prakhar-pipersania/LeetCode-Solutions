class Solution {
public:
    bool findprod(vector<bool> &x, vector<bool> &y)
    {
        for(int i=0;i<26;++i)
            if(x[i]==1&&x[i]==y[i])
                return 0;
        return 1;
    }
    int maxProduct(vector<string>& words) 
    {
        int n=words.size(),m=0,t;
        vector<vector<bool>> x(n,vector<bool> (26));
        for(int i=0;i<n;++i)
            for(int j=0;j<words[i].size();++j)
                x[i][words[i][j]-'a']=1;
        for(int i=0;i<n;++i)
            for(int j=i+1;j<n;++j)
                if(findprod(x[i],x[j]))
                {
                    t=words[i].size()*words[j].size();
                    m=max(m,t);
                }   
        return m;
    }
};