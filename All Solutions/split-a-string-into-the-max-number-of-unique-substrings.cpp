class Solution {
public:
    void split(unordered_set<string> &x,string s,int &c,int start)
    {
        if(start==s.size())
        {
            if(x.size()>c)
                c=x.size();
            return;
        }
        for(int i=start;i<s.size();i++)
        {
            if(x.find(s.substr(start,i-start+1))==end(x))
            {
                x.insert(s.substr(start,i-start+1));
                split(x,s,c,i+1);
                if(c==s.size())
                    return;
                x.erase(s.substr(start,i-start+1));
			}
        }
    }
    int maxUniqueSplit(string s) 
    {
        int c=0;
        unordered_set<string> x;
        split(x,s,c,0);
        return c;
    }
};
