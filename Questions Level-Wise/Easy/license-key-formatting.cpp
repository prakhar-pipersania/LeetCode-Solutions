class Solution {
public:
    string licenseKeyFormatting(string S, int K) 
    {
        string res;
        int x=0;
        for(int i=S.size()-1;i>=0;i--)
        {
            if(S[i]>='a'&&S[i]<='z')
                S[i]-=32;
            if(S[i]!='-')
            {
                res+=S[i];
                x++;
            }
            if(x==K&&i!=0)
            {
                res+='-';
                x=0;
            }
        }
        if(res.size()!=0&&res[res.size()-1]=='-')
            res.resize(res.size()-1);
        x=res.size()-1;
        for(int i=0;i<res.size()/2;i++)
        {
            char temp=res[i];
            res[i]=res[x];
            res[x]=temp;
            x--;
        }  
        return res;
    }
};
