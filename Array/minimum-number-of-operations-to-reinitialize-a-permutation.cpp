class Solution {
public:
    void print(vector<int> &x,int &n)
    {
        for(int i=0;i<n;i++)
            cout<<x[i]<<" ";
        cout<<endl;
    }
    int isper(vector<int> &x,int &n)
    {
        //print(x,n);
        for(int i=0;i<n;i++)
        {
            if(x[i]!=i)
                return 0;
        }
        return 1;
    }
    int reinitializePermutation(int n) 
    {
        int c=1;
        vector<int> x(n);
        vector<int> a(n);
        for(int i=0;i<n;i++)
            x[i]=i;
        while(1)
        {
            for(int i=0;i<n;i++)
                a[i]=(i%2?x[n/2+(i-1)/2]:x[i/2]);
            x=a;
            if(isper(x,n))
                break;
            else
                c++;
        }
        return c;
    }
};