class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        vector<int> c(26);
        vector<string> b(strs.size());
        vector<vector<string>> A;
        map<string,vector<int>> sortedstr;
        for(int j=0;j<strs.size();j++)
        {
            for(int i=0;strs[j][i]!='\0';i++)
                c[strs[j][i]-97]++;
            for(int i=0;i<26;i++)
                while(c[i]!=0)
                {
                    b[j]+='a'+i;
                    c[i]--;
                }
        }
        for(int i=0;i<b.size();i++)
            sortedstr[b[i]].push_back(i);
        for(auto e=begin(sortedstr);e!=end(sortedstr);e++)
        {
            b.resize(0);
            for(auto e1: e->second)
                b.push_back(strs[e1]);
            A.push_back(b);
        }
        return A;    
    }
};
