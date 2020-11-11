class Solution {
public:
    bool isPal(string s)
    {
        for(int i=0,j=s.size()-1;i<j;i++,j--)
            if(s[i]!=s[j])
                return 0;
        return 1;
    }
    bool count(vector<int> &x)
    {
        int e=0,o=0;
        for(int i=0;i<26;i++)
            if(x[i]%2)
                o++;
        return (o>1?0:1);
    }
    bool checkPalindromeFormation(string a, string b) 
    {
        int size=a.size();
        vector<int> x(26),y(26);
        for(int i=0;i<size;i++)
            x[a[i]-'a']++,y[b[i]-'a']++;
        for(int i=0;i<size;i++)
        {
            if(i>0)
                x[a[i-1]-'a']--,x[b[i-1]-'a']++,y[b[i-1]-'a']--,y[a[i-1]-'a']++;
            if((count(y)&&isPal(a.substr(0,i)+b.substr(i,size-i)))||(count(x)&&isPal(b.substr(0,i)+a.substr(i,size-i))))
                return true;
        }
        return false;
    }
};
