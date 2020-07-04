class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) 
    {
        int val=1,temp;
        string s;
        map<int,string,greater<>> x;
        vector<string> a={"Gold Medal","Silver Medal","Bronze Medal"};
        for(int i=0;i<nums.size();i++)
            x[nums[i]]='0';
        for(auto e=begin(x);e!=end(x);e++,val++)
        {
            if(val<4)
            {
                e->second=a[val-1];
            }
            else
            {
                for(temp=val;temp>0;temp/=10)
                    s+='0'+temp%10;
                reverse(s.begin(),s.end());
                e->second=s;
                s.resize(0);
            }
        }
        a.resize(nums.size());
        for(int i=0;i<nums.size();i++)
            a[i]=x[nums[i]];
        return a;
    }
};
