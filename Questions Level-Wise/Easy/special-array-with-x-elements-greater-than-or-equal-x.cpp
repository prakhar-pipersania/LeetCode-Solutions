class Solution {
public:
    int specialArray(vector<int>& nums) 
    {
        int min,max=0;
        for(auto e: nums)
            if(e>max)
                max=e;
        vector<int> x(max+1);
        max=0;
        for(auto e: nums)
            x[e]++;
        for(int i=1;i<x.size();i++)
            x[i]+=x[i-1];
        for(int i=0;i<x.size();i++)
            if(i>0&&i==x[x.size()-1]-x[i-1])
                max++,min=i;
        return max!=0?min:-1;
    }
};
