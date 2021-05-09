class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) 
    {
        vector<int> x(encoded.size()+1);
        x[0]=first;
        for(int i=1;i<x.size();i++)
            x[i]=encoded[i-1]^x[i-1];
        return x;
    }
};