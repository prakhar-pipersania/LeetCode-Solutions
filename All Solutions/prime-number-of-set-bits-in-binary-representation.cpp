class Solution {
public:
    int countPrimeSetBits(int L, int R) 
    {
        int temp,res=0,x;
        vector<int> a={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        unordered_map<int,int> prime;
        for(int i=0;i<a.size();i++)
            prime[a[i]]=1;
        for(int i=L;i<=R;i++)
        {
            temp=i;
            for(x=0;temp>0;temp/=2)
                if(temp%2==1)
                    x++;
            if(prime[x]==1)
                res++;
        }
        return res;
    }
};
