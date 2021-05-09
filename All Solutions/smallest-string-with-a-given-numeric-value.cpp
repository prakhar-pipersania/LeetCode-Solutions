class Solution {
public:
    string getSmallestString(int n, int k) 
    {
        string x;
        x.resize(n);
        for(int i=1;((n-i)*26)>=k;i++,k--)
            x[i-1]='a';
        for(int i=n-1;k>0;i--)
        {
            if(k<=26)
            {
                x[i]=k+96;
                break;
            }
            else
            {
                x[i]='z';
                k-=26;
            }
        }
        return x;
    }
};
