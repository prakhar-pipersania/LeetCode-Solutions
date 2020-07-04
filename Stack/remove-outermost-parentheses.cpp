class Solution {
public:
    string removeOuterParentheses(string S) 
    {
        int flag=0,index=0,disp=0;
        string res;
        for(int i=0;S[i]!='\0';i++)
        {
            if(S[i]=='(')
            {
                if(flag==0)
                    index=i;
                flag++;
            }
            else
            {
                flag--;
            }
            if(flag==0)
            {
                disp=i-index;
                res+=S.substr(index+1,disp-1);
            }
        }
        return res;
    }
};
