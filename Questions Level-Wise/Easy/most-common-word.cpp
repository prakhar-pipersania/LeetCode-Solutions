class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) 
    {
        int x=0;
        string s;
        unordered_map<string,int> a;
        for(int i=0;paragraph[i]!='\0';i++)
        {
            while((paragraph[i]>='a'&&paragraph[i]<='z')||(paragraph[i]>='A'&&paragraph[i]<='Z'))
            {
                if(paragraph[i]>='A'&&paragraph[i]<='Z')
                    paragraph[i]^=32;
                s+=paragraph[i],i++;
                if(paragraph[i]=='\0')
                {
                    i--;break;
                }
            }
            if(s.size()>0)
                a[s]++,s.resize(0);
        }
        for(int i=0;i<banned.size();i++)
            a.erase(banned[i]);
        for(auto e: a)
            if(e.second>x)
                x=e.second,s=e.first;
        return s;
    }
};
