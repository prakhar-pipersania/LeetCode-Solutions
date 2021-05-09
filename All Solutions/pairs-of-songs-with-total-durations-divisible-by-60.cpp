class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
        vector<int> x(60);
        for(auto e: time)
            x[e%60]++;
        int c=((x[0]*(x[0]-1))+(x[30]*(x[30]-1)))/2;
        for(int i=1;i<30;i++)
            c+=x[i]*x[60-i];
        return c;
    }
};
