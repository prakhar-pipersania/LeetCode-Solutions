#define MAX 10000
int top;
char stack[MAX];
void push(char element)
{
	top++;
	stack[top]=element;
}
char pop()
{
	char y;
    if(top!=-1)
    {
        y=stack[top];
	    top--;
    	return y;
    }
    return '0';
}
bool isValid(char * s)
{
    top=-1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            push(s[i]);
        if(s[i]==')'||s[i]=='}'||s[i]==']')
        {
            char c=pop();
            if(c=='0')
                return false;
            if(s[i]==')')
                {
                    if(c=='{'||c=='[')
                        return false;
                }
            else if(s[i]=='}')
                {
                    if(c=='['||c=='(')
                        return false;
                }
            else if(s[i]==']')
                {
                    if(c=='{'||c=='(')
                        return false;
                }
        }
    }
    if(top!=-1)
        return false;
    return true;
}
