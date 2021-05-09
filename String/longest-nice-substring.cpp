class Solution {
public:
    void findmax(string &s,string &max)
    {
        for(int i=0;i<s.size();i++)
        {
            vector<int> sm(26);
            vector<int> l(26);
            for(int j=i;j<s.size();j++)
            {
                if(s[j]>='a'&&s[j]<='z')
                {
                    sm[s[j]-'a']++;
                }
                else
                {
                    l[s[j]-'A']++;
                }
                int c=0,sum=0;
                for(int k=0;k<26;k++)
                {
                    if(sm[k]&&l[k])
                    {
                        c++;
                        sum+=sm[k]+l[k];
                    }
                    if(!sm[k]&&!l[k])
                    {
                        c++;
                    }
                }
                if(c==26&&sum>max.size())
                    max=s.substr(i,sum);
            }
        }
    }
    string longestNiceSubstring(string s) 
    {
        string max="";
        findmax(s,max);
        return max;
    }
};