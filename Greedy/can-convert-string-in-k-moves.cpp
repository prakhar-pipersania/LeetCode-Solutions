class Solution {
public:
    bool canConvertString(string s, string t, int k) 
    {
        if(s.size()!=t.size())
            return false;
        int temp;
        map<int,int> a;
        vector<int> x(s.size());
        for(int i=0;i<s.size();i++)
        {
            x[i]=t[i]-s[i];
            if(x[i]<0)
                x[i]+=26;
        }
        for(int i=0;i<x.size();i++)
        {
            if(x[i]!=0)
            {
                if(a[x[i]]==0)
                {
                    a[x[i]]=1;
                    if(x[i]>k)
                        return false;
                }
                else
                {
                    temp=26*a[x[i]]+x[i];
                    if(temp<=k)
                        a[x[i]]++;
                    else
                        return false;
                }  
            }
        }
        return true;
    }
};
