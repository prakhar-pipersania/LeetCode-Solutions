class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) 
    {
        int m,i,j;
        vector<int> x(26),y(26);
        for(i=0;i<s1.size();i++)
            x[s1[i]-'a']++,y[s2[i]-'a']++;
        for(i=0;i<26;i++)
            m=min(x[i],y[i]),x[i]-=m,y[i]-=m;
        for(i=0;i<26&&x[i]==0;i++){}
        for(j=0;j<26&&y[j]==0;j++){}
        if(i==j)
            return true;
        else if(j>i)
        {
            while(j>i)
            {
                m=min(x[i],y[j]),x[i]-=m,y[j]-=m;
                while(i<26&&x[i]==0)i++;
                while(j<26&&y[j]==0)j++;
            }
            return i==j?true:false;
        }
        else
        {
            while(i>j)
            {
                m=min(x[i],y[j]),x[i]-=m,y[j]-=m;
                while(i<26&&x[i]==0)i++;
                while(j<26&&y[j]==0)j++;
            }
            return i==j?true:false;
        }
        return false;
    }
};
