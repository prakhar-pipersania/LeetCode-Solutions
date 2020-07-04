class Solution {
public:
    int keycode(char c)
    {
        if(c>='A'&&c<='Z')
            c+=32;
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            return 0;
        return 1;
    }
    string toGoatLatin(string S) 
    {
        int key,flag=0,c=1;
        char first;
        string res;
        if(S[S.size()-1]!=' ')
            S+=' ';
        for(int i=0;S[i]!='\0';i++)
        {
            key=keycode(S[i]);
            if(key==1)
            {
                first=S[i];
                flag=1;
            }
            else
            {
                res+=S[i];
            }
            i++;
            while(S[i]!=' ')
                res+=S[i++];
            if(flag==1)
            {
                res+=first;
                flag=0;
            }
            res+="ma";
            for(int i=0;i<c;i++)
                res+='a';
            c++;
            res+=' '; 
        }
        res.resize(res.size()-1);
        return res;
    }
};
