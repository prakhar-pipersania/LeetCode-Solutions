class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int d) 
    {
        if(!t.size()||!d)
            return 0;
        int c=0,cur=t[0];
        for(int i=0;i<t.size();i++)
            if(t[i]+d>cur)
                c+=min(t[i]+d-cur,d),cur=t[i]+d;
        return c;
    }
};
