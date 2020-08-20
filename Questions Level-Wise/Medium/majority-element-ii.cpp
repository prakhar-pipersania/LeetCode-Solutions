class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int size=nums.size();
        map<int,int> x;
        for(int i=0;i<size;i++)
            x[nums[i]]++;
        nums.resize(0);
        for(auto e: x)
            if(e.second>(size/3))
                nums.push_back(e.first);
        return nums;
    }
};

//OR

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
	{
        int size=nums.size()/3,count1=0,count2=0,num1=0,num2=0;
        for(int e: nums)
		{
            if(e==num1)
                count1++;
            else if(e==num2)
                count2++;
            else if(count1==0)
                num1=e,count1=1;
            else if(count2==0)
                num2=e,count2=1;
            else
                count1--,count2--;
        }
        count1=count2=0;
        for(int e : nums) 
		{
            if(e==num1) 
				count1++;
            else if(e==num2) 
				count2++;
        }
		nums.resize(0);
        if(count1>size) 
			nums.push_back(num1);
        if(count2>size) 
			nums.push_back(num2);
        return nums;
    }
};
