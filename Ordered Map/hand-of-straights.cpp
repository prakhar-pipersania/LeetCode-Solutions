class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) 
    {
        if(W==1)
            return true;
        if(hand.size()%W!=0)
            return false;
        map<int,int> x;
        vector<int> a(W);
        for(auto e: hand)
            x[e]++;
        while(x.size()>0)
        {
            int i=0;
            for(auto e=begin(x);e!=end(x)&&i<W;e++)
            {
                if(i==0)
                {
                    a[i++]=e->first;
                    e->second--;
                    if(e->second==0)
                        x.erase(e->first);
                }
                else
                {
                    if(a[i-1]==e->first-1)
                    {
                        a[i++]=e->first;
                        e->second--;
                        if(e->second==0)
                            x.erase(e->first);
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            if(i<W)
                return false;
        }
        return true; 
    }
};
