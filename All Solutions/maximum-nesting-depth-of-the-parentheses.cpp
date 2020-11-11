class Solution {
public:
    int maxDepth(string s) 
    {
        int min=0,c=0;
        for(auto e: s) 
        {
            if(e=='(')
            {
                c--;
                if(c<min)
                    min=c;
            }
            else if(e==')')
            {
                if(c<0)
                    c++;
            }
        }
        return abs(min);
    }
};
