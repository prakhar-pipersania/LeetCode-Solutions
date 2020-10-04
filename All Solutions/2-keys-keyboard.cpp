class Solution {
public:
    void findmin(int n,int c,int l,int s,int &val)
    {
        if(s<val)
        {
            if(c<n)
                findmin(n,c+c,c,s+2,val),findmin(n,c+l,l,s+1,val);
            else if(c==n)
                val=s;
        }
    }
    int minSteps(int n) 
    {
        if(n==1)
            return 0;
        int val=INT_MAX;
        findmin(n,1,1,1,val);
        return val;
    }
};
