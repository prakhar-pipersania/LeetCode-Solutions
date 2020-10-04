class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        int size=0;
        string s;
        s.reserve(pattern.size());
        vector<char> c(58);
        unordered_map<char,char> x;
        for(int i=0;i<words.size();i++)
        {
            if(words[i].size()==pattern.size())
            {
                for(int j=0;j<pattern.size();j++)
                    if(c[words[i][j]-'A']!='1')
                        x[pattern[j]]=words[i][j],c[words[i][j]-'A']='1';
                for(int j=0;j<pattern.size();j++)
                    s+=x[pattern[j]];
                if(s==words[i])
                    words[size++]=s;
                s="",x.clear(),fill(begin(c),end(c),'0');
            }
        }
        words.resize(size);
        return words;
    }
};
