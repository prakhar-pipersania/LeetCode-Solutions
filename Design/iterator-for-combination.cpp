class CombinationIterator {
public:
    int i=0,len=0;
    string s;
    vector<string> x;
    void gen(string s,int len,string a,int start)
    {
        if(a.size()==len)
            x.push_back(a);
        else
        {
            for(int i=start;(i<s.size())&&((s.size()-start)>=(len-a.size()));i++)
                gen(s,len,a+s[i],i+1);
        }
    }
    CombinationIterator(string characters, int combinationLength) 
    {
        s=characters,len=combinationLength;
        gen(s,len,"",0);
    }
    string next() 
    {
        i++;
        return x[i-1];    
    }
    bool hasNext() 
    {
        if(i<x.size())
            return true;
        return false;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
 