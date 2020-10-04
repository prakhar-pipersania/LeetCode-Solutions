class Solution {
public:
    int getSum(int a,unsigned int b) 
    {
        return b==0?a:getSum(a^b,(a&b)<<1);    
    }
};

//OR

class Solution {
public:
    int getSum(int a,int b) 
    {
        return b==0?a:getSum(a^b,(a&b&INT_MAX)<<1);    
    }
};
