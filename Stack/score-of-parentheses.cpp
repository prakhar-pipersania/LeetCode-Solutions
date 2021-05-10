class Solution {
public:
    int scoreOfParentheses(string S) 
    {
        short size = S.size()-1;
        if(size == 1)
            return 1;
        int sum=0;
        short flag=0,in=0,c=0;
        for(short i=0;i<=size;i++)
        {
            (S[i]=='(')?++flag:--flag;
            if(!flag)
            {
                if(i!=size||(i==size&&c>0))
                {
                    sum+=scoreOfParentheses(S.substr(in,i-in+1));
                    in = i+1;
                    c++;
                }
            }
            if(i==size&&sum>0)
                return sum;
        }
        return (2*scoreOfParentheses(S.substr(1,size-1)));
    }
};