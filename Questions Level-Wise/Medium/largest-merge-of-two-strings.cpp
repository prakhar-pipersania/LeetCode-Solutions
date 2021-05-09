class Solution {
public:
    int check(string &word1, string &word2,int i,int j)
    {
        for(;i<word1.size()&&j<word2.size();i++,j++)
        {
            if(word1[i]>word2[j])
            {
                return 0;
            }
            if(word1[i]<word2[j])
            {
                return 1;
            }
        }
        return -1;
    }
    string largestMerge(string word1, string word2) 
    {
        string m;
        int i=0,j=0;
        if(word1==word2)
            m+=word1[i++];
        while(i<word1.size()&&j<word2.size())
        {
            if(word1[i]>word2[j])
            {
                m+=word1[i];
                i++;
            }
            if(word1[i]<word2[j])
            {
                m+=word2[j];
                j++;
            }
            if(word1[i]==word2[j])
            {
                int c=check(word1,word2,i,j);
                if(c==0)
                {
                    m+=word1[i];
                    i++;
                }
                else if(c==1)
                {
                    m+=word2[j];
                    j++;
                }
                else
                {
                    string a=word1.substr(i,word1.size()-i);
                    string b=word2.substr(j,word2.size()-j);
                    if(a+b>b+a)
                        return (m+a+b);
                    else if(a+b<b+a)
                        return (m+b+a);
                    else
                    {
                        unordered_set<char> s;
                        for(auto e: a)
                            s.insert(e);
                        for(auto e: b)
                            s.insert(e);
                        if(s.size()==1)
                            return (m+a+b);
                        return (m+largestMerge(a,b));
                    }
                }
            }
        }
        while(i<word1.size())
        {
            m+=word1[i];
            i++;
        }
        while(j<word2.size())
        {
            m+=word2[j];
            j++;
        }
        return m;
    }
};