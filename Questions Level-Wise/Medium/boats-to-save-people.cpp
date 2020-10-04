class Solution {
public:
    int numRescueBoats(vector<int>& A, int limit) 
    {
        int key,c=0;
        map<int,int,greater<>> x;
        for(auto e: A)
            x[e]++;
        for(;x.size()>0;c++)
        {
            auto e=begin(x);
            key=e->first;
            e->second==1?x.erase(key):e->second--;
            auto e1=x.lower_bound(limit-key);
            if(e1!=end(x))
                e1->second==1?x.erase(e1->first):e1->second--;
        }
        return c;
    }
};
