class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        int h=0;
        sort(begin(citations),end(citations));
        for(int i=0,val=citations.size();i<citations.size()&&val>h;i++,val--)
            if(citations[i]>=val&&val>h)
                h=val;
        return h;
    }
};
