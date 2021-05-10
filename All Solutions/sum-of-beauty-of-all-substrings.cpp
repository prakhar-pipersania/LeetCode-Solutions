class Solution {
public:
    int freq(vector<short> &x)
    {
        int max=0,min=500;
        for(int i=0;i<26;i++)
        {
            if(x[i]>max)
                max=x[i];
            if(x[i]<=max&&x[i]>0&&x[i]<min)
                min=x[i];
        }
        if(max==0||min==0||min>=max)
            return 0;
        return (max-min);
    }
    int beautySum(string s) 
    {
        int sum=0;
        vector<short> x(26);
        vector<vector<short>> c;
        for(int i=0;i<s.size();i++)
        {
            x[s[i]-'a']++;
            sum+=freq(x);
            c.push_back(x);
        }
        for(int i=0;i<s.size()-1;i++)
        {
            for(int j=0;j<c.size();j++)
            {
                c[j][s[i]-'a']--;
                sum+=freq(c[j]);
            }
        }
        return sum;
    }
};