class WordFilter {
public:
    unordered_map<string,unordered_set<int>> p,s;
    map<pair<string,string>,int> x;
    WordFilter(vector<string>& words) 
    {
        int v;
        for(int i=0;i<words.size();i++)
        {
            v=words[i].size();
            for(int j=0;j<v;j++)
            {
                p[words[i].substr(0,j+1)].insert(i);
                s[words[i].substr(j,v-j)].insert(i);
            }
        }
    }
    
    int f(string pre, string suf) 
    {
        if(p.find(pre)==p.end()||s.find(suf)==s.end())
            return -1;
        if(x.find({pre,suf})!=end(x))
            return x[{pre,suf}];
        int v=-1;
        for(auto e: p[pre])
            if(s[suf].find(e)!=s[suf].end())
                v=max(v,e);
        x[{pre,suf}]=v;
        return v;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */