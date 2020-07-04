class Solution {
public:
    int countPrimes(int n) 
    {
        int x=0;
        if(n<3)
            return 0;
        vector<char> a(n-2,'a');
        for(int i=2;i*i<n;i++)
            if(a[i-2]=='a')
                for(int j=i*i;j<n;j+=i)
                    a[j-2]='z';
        for(auto e: a)
            if(e=='a')
                x++;
        return x;    
    }
};
