class Solution {
public:
    int strtonum(string num)
    {
        bool sign=(num[0]=='-'?1:0);
        int n=0;
        for(int i=sign;i<num.size();i++)
            n=(n*10)+(num[i]-'0');
        if(sign)
            n*=-1;
        return n;
    }
    bool isOpr(string opr)
    {
        return (opr=="+"||opr=="*"||opr=="-"||opr=="/");
    }
    int output(int b,int a,string opr)
    {
        if(opr=="+")
            return (b+a);
        else if(opr=="-")
            return (b-a);
        else if(opr=="*")
            return (b*a);
        return (b/a);
    }
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> x;
        for(int i=0;i<tokens.size();i++)
        {
            if(isOpr(tokens[i]))
            {
                int a=x.top();
                x.pop();
                int b=x.top();
                x.pop();
                x.push(output(b,a,tokens[i]));
            }
            else
            {
                x.push(strtonum(tokens[i]));
            }
        }
        return x.top();
    }
};