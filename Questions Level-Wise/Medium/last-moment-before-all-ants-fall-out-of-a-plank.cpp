class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) 
    {
        int lm=INT_MIN,rm=INT_MIN;
        for(int i=0;i<left.size();i++)
            if(left[i]>lm)
                lm=left[i];
        for(int i=0;i<right.size();i++)
            if(n-right[i]>rm)
                rm=n-right[i];
        if(lm>rm)
            return lm;
        return rm;
    }
};
