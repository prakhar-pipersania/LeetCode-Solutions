class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        if(s.size()<11)
            return {};
        int size=s.size();
        vector<string> a;
        string str=s.substr(0,10);
        unordered_map<string,int> c;
        c[str]++;
        for(int i=10;i<size;i++)
            str.erase(begin(str)),str+=s[i],c[str]++;
        for(auto e: c)
            if(e.second>1)
                a.push_back(e.first);
        return a;
    }
};
