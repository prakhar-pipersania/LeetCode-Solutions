class Solution {
public:
    int countHomogenous(string s) 
    {
        long long c=0,m=0;
        for(int i=0;i<s.size()-1;i++) 
        {
            c++;
            if(s[i]!=s[i+1])
            {
                m=(m+(((c*(c+1))/2)%1000000007))%1000000007;
                c=0;
            }
        }
        c++;
        m=(m+(((c*(c+1))/2)%1000000007))%1000000007;
        return m;
    }
};