class Solution {
public:
    int numSplits(string s) 
    {
        int t1,t2,c=0;
        vector<int> x(26);
        vector<int> a(26);
        for(int i=0;i<s.size();i++)
            x[s[i]-'a']++;
        for(int i=0;i<s.size();i++)
        {
            x[s[i]-'a']--;
            a[s[i]-'a']++;
            t1=t2=0;
            for(int j=0;j<26;j++)
            {
                if(x[j]>0)
                    t1++;
                if(a[j]>0)
                    t2++;
            }
            if(t1==t2)
                c++;
        }
        return c;
    }
};
