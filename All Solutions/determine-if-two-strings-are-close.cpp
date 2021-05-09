class Solution {
public:
    bool closeStrings(string word1, string word2) 
    {
        if(word1.size()!=word2.size())
            return false;
        vector<int> x(26),y(26);
        for(auto e: word1)
            x[e-'a']++;
        for(auto e: word2)
            y[e-'a']++;
        for(short i=0;i<26;i++)
        {
            if((x[i]==0&&y[i]!=0)||(y[i]==0&&x[i]!=0))
                return false;
            if(x[i]==y[i])
                x[i]=y[i]=0;
        }
        for(int i=0;i<26;i++)
        {
            if(x[i])
            {
                for(int j=0;j<26;j++)
                {
                    if(x[i]==y[j])
                        break;
                    if(j==25)
                        return false;
                }
            }
            if(y[i])
            {
                for(int j=0;j<26;j++)
                {
                    if(y[i]==x[j])
                        break;
                    if(j==25)
                        return false;
                }
            }
        }
        return true;
    }
};
