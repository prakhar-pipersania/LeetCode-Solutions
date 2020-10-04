class Solution {
public:
    string itoa(int num)
    {
        if(num==0)
            return "0";
        string s;
        for(;num>0;num/=10)
            s+='0'+(num%10);
        reverse(s.begin(),s.end());
        return s;
    }
    static bool compare(string a,string b)
    {
        return a+b>b+a?true:false;
    }
    string largestNumber(vector<int>& nums) 
    {
        int c=0;
        string s;
        vector<string> x(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            x[i]=itoa(nums[i]);
            if(nums[i]==0)
                c++;
        }
        if(c==nums.size())
            return "0";
        sort(x.begin(),x.end(),compare);
        for(auto e: x)
            s+=e;
        return s;
    }
};
