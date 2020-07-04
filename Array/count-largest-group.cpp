class Solution {
public:
    int countLargestGroup(int n) 
    {
        int sum,temp;
        unordered_map<int,int> a;
        for(int i=1;i<=n;i++)
        {
            for(temp=i,sum=0;temp>0;temp/=10)
                sum+=temp%10;
            a[sum]++;
        }
        sum=temp=0;
        for(auto e: a)
            if(e.second>=temp)
                e.second>temp?temp=e.second,sum=1:sum++;
        return sum;
    }
};
