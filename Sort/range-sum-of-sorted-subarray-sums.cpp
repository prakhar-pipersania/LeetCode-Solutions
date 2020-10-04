class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) 
    {
        int val=0;
        vector<int> consum;
        consum.reserve((n*(n+1))/2);
        for(int i=0;i<nums.size();i++)
            for(int j=i,sum=0;j<nums.size();j++)
                sum+=nums[j],consum.push_back(sum);
        sort(consum.begin(),consum.end());
        for(int i=left-1;i<right;i++)
            val+=consum[i],val%=1000000007;
        return val;
    }
};
