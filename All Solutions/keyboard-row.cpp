class Solution {
public:
    int keycode(char c)
    {
        if(c>='A'&&c<='Z')
            c+=32;
        if(c=='z'||c=='x'||c=='c'||c=='v'||c=='b'||c=='n'||c=='m')
            return 0;
        if(c=='a'||c=='s'||c=='d'||c=='f'||c=='g'||c=='h'||c=='j'||c=='k'||c=='l')
            return 1;
        return 2;
    }
    vector<string> findWords(vector<string>& words) 
    {
        int flag,key;
        vector<string> A;
        A.reserve(words.size());
        for(int i=0;i<words.size();i++)
        {
            flag=0;
            key=keycode(words[i][0]);
            for(int j=0;words[i][j]!='\0';j++)
            {
                if(key!=keycode(words[i][j]))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                A.push_back(words[i]);
        }
        return A;
    }
};
