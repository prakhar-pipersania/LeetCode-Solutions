class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) 
    {
        string a,b;
        int space,flag,par;
        vector<vector<string>> res;
        unordered_map<string,vector<string>> x; 
        for(int i=0;i<paths.size();i++)
        {
            flag=0;
            for(int j=0;j<paths[i].size();j++)
            {
                if(paths[i][j]==' ')
                {
                    space=j;
                    if(flag==0)
                        a=paths[i].substr(0,j)+"/",flag=1;
                }
                else if(paths[i][j]=='(')
                    par=j;
                else if(paths[i][j]==')')
                    x[paths[i].substr(par+1,j-par-1)].push_back(a+paths[i].substr(space+1,par-space-1));
            }
        }
        for(auto e: x)
            if(e.second.size()>1)
                res.push_back(e.second);
        return res;
    }
};
