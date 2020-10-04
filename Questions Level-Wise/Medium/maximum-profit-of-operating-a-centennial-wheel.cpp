class Solution {
public:
    int minOperationsMaxProfit(vector<int>& A, int bc, int rc) 
    {
        int cost=0,wait=0,done=0,t,it=-1;
        for(int i=0;i<A.size()||wait!=0;i++)
        {
            if(i<A.size())
                wait+=A[i];
            if(wait>=4)
                done+=4,wait-=4;
            else
                done+=wait,wait=0;
            t=(done*bc)-((i+1)*rc);
            if(t>0&&t>cost)
                cost=t,it=i+1;
        }
        return it;
    }
};
