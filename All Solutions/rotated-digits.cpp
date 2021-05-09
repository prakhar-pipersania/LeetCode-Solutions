class Solution {
public:
    int rotatedDigits(int N) 
    {
        int c=0;
        for(int i=1;i<=N;i++)
        {
            string s=to_string(i);
            for(auto e: s)
                if(e=='2'||e=='5'||e=='6'||e=='9')
                {
                    c++;
                    for(auto e1: s)
                        if(e1=='3'||e1=='4'||e1=='7')
                        {
                            c--;
                            break;
                        }
                    break;
                }
        }
        return c;
    }
};
