//Runtime:60 ms	Memory:15.7 MB
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        int sum=0,i=1,j=0;
        if(nums.size()<1)
            return false;
        std::sort(nums.begin(),nums.end());
        while(i<nums.size())
        {
            if(nums[i]!=nums[j])
            {
                j++;
                nums[j]=nums[i];
            }
        i++;
        }
        if(j+1!=nums.size())
            return true;
        return false;
    }
};

//Runtime:144 ms	Memory:20.8 MB
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        std::map<int,int> count;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
            if(count[nums[i]]>1)
                return true;
        }
        return false;
    }
};
