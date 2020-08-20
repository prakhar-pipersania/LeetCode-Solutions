class Solution {
public:
    int minOperations(int n) 
    {
        int sum=0;
        for(int i=0;n-((2*i)+1)>0;i++)
            sum+=(n-((2*i)+1));
        return sum;
    }
};
