class Solution {
public:
    string customSortString(string S, string T) 
    {
        vector<int> a(26);
        for(int i=0;T[i]!='\0';i++)
            a[T[i]-'a']++;
        T.resize(0);
        for(int i=0;S[i]!='\0';i++)
            for(;a[S[i]-'a']>0;a[S[i]-'a']--)
                T+=S[i];
        for(int i=0;i<26;i++)
            for(;a[i]>0;a[i]--)
                T+='a'+i;
        return T;
    }
};
