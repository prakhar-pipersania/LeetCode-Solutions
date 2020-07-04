class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        int flag;
        string val;
        set<string> S;
        for(int i=0;i<emails.size();i++)
        {
            flag=0;
            for(int j=0;emails[i][j]!='\0';j++)
            {
                if(emails[i][j]>='a'&&emails[i][j]<='z'||emails[i][j]>='0'&&emails[i][j]<='9'||emails[i][j]>='A'&&emails[i][j]<='Z')
                {
                    val+=emails[i][j];
                }
                else if(emails[i][j]=='+')
                {
                    while(emails[i][j]!='@')
                        j++;
                    val+=emails[i][j];
                    flag=1;
                }
                else if(emails[i][j]=='@')
                {
                    val+=emails[i][j];
                    flag=1;
                }
                else if(emails[i][j]=='.'&&flag==1)
                {
                    val+=emails[i][j];
                }  
            }
            S.insert(val);
            val.resize(0);
        }
        return S.size();
    }
};
