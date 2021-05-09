class Solution {
public:
    void wiggleSort(vector<int>& nums) 
    {
        vector<int> x=nums;
        sort(begin(x),end(x));
        int k=x.size()/2;
        if(!(x.size()%2))
            --k;
        for(int i=0,j=x.size()-1;i<x.size();i++)
            nums[i]=(!(i%2))?x[k--]:x[j--];
    }
};