class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        int c=0;
        vector<int> x(26);
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                c++;
                x[s1[i]-'a']++;
                x[s2[i]-'a']--;
            }
        }
        if(c==0)
            return true;
        if(c==2)
        {
            c=0;
            for(auto e: x)
                if(e==0)
                    c++;
            if(c==26)
                return true;
        }
        return false;
    }
};