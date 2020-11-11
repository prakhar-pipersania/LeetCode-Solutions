class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        string s;
        vector<string> x;
        if(nums.size()==0)
            return x;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(s.size()==0)
            {
                s+=to_string(nums[i]);
                if(nums[i]+1==nums[i+1])
                    s+="->";
            }
            else if(nums[i]+1!=nums[i+1]&&s[s.size()-1]=='>')
                s+=to_string(nums[i]);
            if(s[s.size()-1]!='>')
                x.push_back(s),s="";
        }
        s+=to_string(nums[nums.size()-1]),x.push_back(s);
        return x;
    }
};
