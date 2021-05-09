class Solution {
public:
    void findseq(vector<bool> &x,short &pos,int &ava,short &c)
    {
        if(!ava)
            c++;
        else
        {
            for(int i=0;i<x.size();i++)
                if(x[i]&&(!((i+1)%pos)||!(pos%(i+1))))
                {
                    x[i]=false,pos++,ava--;
                    findseq(x,pos,ava,c);
                    x[i]=true,pos--,ava++;
                }
        }
    }
    int countArrangement(int n) 
    {
        short c=0,pos=1;
        vector<bool> x(n,1);
        findseq(x,pos,n,c);
        return c;
    }
};