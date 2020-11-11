class Solution {
public:
    int rob(vector<int>& n) 
    {
        int size=n.size()-1;
        if(size==0)
            return n[0];
        if(size==1)
            return max(n[0],n[1]);
        vector<int> x=n;
        n[2]=max(n[1],n[2]);
        x[1]=max(x[0],x[1]);
        for(int i=2;i<size;i++)
        {
            x[i]=max(x[i]+x[i-2],x[i-1]);
            n[i+1]=max(n[i+1]+n[i-1],n[i]);
        }
        return max(x[size-1],n[size]);
    }
};
