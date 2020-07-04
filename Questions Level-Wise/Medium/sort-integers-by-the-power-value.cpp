class Solution {
public:
    int getKth(int lo, int hi, int k) 
    {
        int x,c;
        map<int,vector<int>> count;
        for(int i=lo;i<=hi;i++)
        {
            x=i;c=0;
            while(x>1)
            {
                if(x%2==0)
                {
                    x/=2;
                    c++;
                }
                else
                {
                    x=(3*x)+1;
                    c++;
                }
            }
            count[c].push_back(i);
        }
        c=1;
        for(auto e=begin(count);e!=end(count);e++)
        {
            for(auto e1: e->second)
            {
                if(c==k)
                    return e1;
                c++;
            }
        }
        return 0;
    }
};
