class Solution {
public:
    int minCost(string s, vector<int>& cost) 
    {
        int flag=0,max=0,sum=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(flag==0&&s[i]==s[i+1])
            {
                sum+=cost[i],flag=1;
                if(cost[i]>max)
                    max=cost[i];
            }
            else if(flag==1&&s[i]==s[i+1])
            {
                sum+=cost[i];
                if(cost[i]>max)
                    max=cost[i];
            }
            else if(flag==1&&s[i]!=s[i+1])
            {
                sum+=cost[i];
                if(cost[i]>max)
                    max=cost[i];
                sum-=max;
                flag=max=0;
            }
        }
        if(max>0)
        {
            sum+=cost[cost.size()-1];
            if(cost[cost.size()-1]>max)
                max=cost[cost.size()-1];
            sum-=max;
        }
        return sum;
    }
};
