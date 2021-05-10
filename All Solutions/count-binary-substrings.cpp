class Solution {
public:
    int countBinarySubstrings(string s) 
    {
        int c=0,size=0;
        vector<int> x(1,1);
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                x[size]++;
            else
                size++,x.push_back(1);
        }
        for(int i=1;i<x.size();i++)
            c+=min(x[i],x[i-1]);
        return c;
    }
};