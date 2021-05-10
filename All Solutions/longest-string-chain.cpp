class Solution {
public:
    int max(int a, int b)
    {
        return std::max(a,b);
    }
    static bool cmp(string &a, string &b)
    {
        return (a.size()<b.size());
    }
    bool isValid(string &w1, string &w2)        // 'w1' is always greater than 'w2'
    {
        int i=0,j=w1.size(),k=w2.size();
        if(j!=k+1)
            return 0;
        while(i<j&&i<k&&w1[i]==w2[i])
            i++;
        return (w1.substr(0,i)+w1.substr(i+1,j-i-1)==w2?1:0);
    }
    int longestStrChain(vector<string>& words) 
    {
        int n=words.size();
        sort(words.begin(),words.end(),cmp);
        vector<short> m(n,1);
        for(int i=n-2;i>=0;i--)
            for(int j=i+1;j<n;j++)
                if(isValid(words[j],words[i]))
                    m[i]=max(m[i],m[j]+1);
        for(auto e: m)
            m[0]=max(m[0],e);
        return m[0];
    }
};