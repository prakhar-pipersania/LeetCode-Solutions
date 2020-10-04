class Solution {
public:
    int numOfSubarrays(vector<int>& arr) 
    {
        int n,c=0;
        vector<int> a(2);
        for(int i=arr.size()-1;i>=0;i--)
        {
            n=arr[i]%2;
            if(n==1)
                a[0]^=a[1]^=a[0]^=a[1];
            a[n]++;
            c+=a[1];
            c%=1000000007;
        }
        return c;
    }
};
