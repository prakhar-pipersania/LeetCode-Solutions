class Solution {
public:
    int minPartitions(string n) 
    {
        int x=0;
        for(auto e: n)
        {
            if((e-'0')>x)
            {
                x=e-'0';
                if(x==9)
                    return 9;
            }
        }
        return x;
    }
};
