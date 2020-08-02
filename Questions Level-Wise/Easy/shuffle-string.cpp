class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
        unordered_map<int,char> x;
        for(int i=0;i<indices.size();i++)
            x[indices[i]]=s[i];
        s.resize(0);
        for(int i=0;i<x.size();i++)
            s+=x[i];
        return s;
    }
};
