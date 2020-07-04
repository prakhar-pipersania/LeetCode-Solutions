class Solution {
public:
    vector<string> stringMatching(vector<string>& words) 
    {
        vector<string> a;
        for(int i=0;i<words.size();i++)
            for(int flag=0,j=0;j<words.size();j++)
            {
                if(i!=j)
                    for(int k=0;(k+words[i].size())<=words[j].size();k++)
                        if(words[j].substr(k,words[i].size())==words[i])
                        {
                            a.push_back(words[i]),flag=1;break;
                        }
                if(flag==1)break;
            }
        return a;
    }
};
