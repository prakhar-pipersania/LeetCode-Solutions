class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int c=0;
        unordered_map<int,int> x;
        for(auto e: nums)
            x[e]++;
        for(auto e: nums)
            if(x[e]>0&&x.find(k-e)!=end(x)&&x[k-e]>0)
            {
                x[e]--;
                if(x[k-e]>0)
                    c++,x[k-e]--;
            }
        return c;
    }
};
