class Solution {
public:
    string reorganizeString(string S) 
    {
        bool flag;
        char ch='0';
        int a=S.size(),d=-1,m;
        vector<int> x(26);
        for(auto e: S)
            x[e-'a']++;
        S.resize(0);
        while(a)
        {
            flag=false;
            m=0;
            for(int i=0;i<26;i++)
                if((i+'a')!=ch&&x[i]>m)
                    m=x[i],d=i,flag=true;
            if(!flag)
                return "";
            S+=ch=('a'+d),x[d]--,a--;
        }
        return S; 
    }
};
