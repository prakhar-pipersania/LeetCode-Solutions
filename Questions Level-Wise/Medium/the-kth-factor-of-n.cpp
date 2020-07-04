class Solution {
public:
    int kthFactor(int n, int k) 
    {
        vector<int> a;
        for(int i=1;i<=n;i++)
            if(n%i==0)
                a.push_back(i);
        if(a.size()>=k)
            return a[k-1];
        return -1;
    }
};
