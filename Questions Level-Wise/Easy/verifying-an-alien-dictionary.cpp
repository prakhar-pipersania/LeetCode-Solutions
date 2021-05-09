class Solution {
public:
    bool compare(string &x,string &y,unordered_map<char,short> &pattern)
    {
        short len=min(x.size(),y.size());
        for(int i=0;i<len;i++)
        {
            if(pattern[x[i]]>pattern[y[i]])
                return 0;
            else if(pattern[x[i]]<pattern[y[i]])
                return 1;
        }
        return (x.size()>y.size()?0:1);
    }
    bool isAlienSorted(vector<string>& words, string order) 
    {
        unordered_map<char,short> pattern;
        for(int i=0;i<order.size();i++)
            pattern[order[i]]=i;
        for(int i=1;i<words.size();i++)
            if(!compare(words[i-1],words[i],pattern))
                return 0;
        return 1;
    }
};