class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        vector<int> a(256,0);
        map<char,char> iso;
        for(int i=0;i<s.size();i++)
        {
            if(a[t[i]]==0)
            {
                iso[s[i]]=t[i];
                a[t[i]]++;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            s[i]=iso[s[i]];
            if(s[i]!=t[i])
                return false;
        }
        return true;
    }
};
