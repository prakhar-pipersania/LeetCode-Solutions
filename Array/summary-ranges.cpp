class Solution {
public:
    string numtostr(int n)
    {
        long num=n;
        int sign=0;
        string s;
        if(num==0)
            return "0";
        if(num<0)
            sign=1,num*=-1;
        while(num>0)
            s+='0'+(num%10),num/=10;
        reverse(begin(s),end(s));
        return sign==1?"-"+s:s;
    }
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
                s+=numtostr(nums[i]);
                if(nums[i]+1==nums[i+1])
                    s+="->";
            }
            else if(nums[i]+1!=nums[i+1]&&s[s.size()-1]=='>')
                s+=numtostr(nums[i]);
            if(s[s.size()-1]!='>')
                x.push_back(s),s.resize(0);
        }
        s+=numtostr(nums[nums.size()-1]),x.push_back(s);
        return x;
    }
};
