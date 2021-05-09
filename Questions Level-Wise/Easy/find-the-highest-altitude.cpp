class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int c=0,m=0;
        for(int i=0;i<gain.size();i++)
            c+=gain[i],m=max(c,m);    
        return m;
    }
};