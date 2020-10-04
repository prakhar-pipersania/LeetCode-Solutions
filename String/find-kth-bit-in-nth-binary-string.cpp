class Solution {
public:
    string reverse(string s)
    {
        char temp;
        for(int i=0,j=s.size()-1;i<(s.size()/2)+1;i++,j--)
        {
            s[i]=='1'?s[i]='0':s[i]='1';
            if(j!=i)
            {
                s[j]=='1'?s[j]='0':s[j]='1';
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
        return s;
    }
    char findKthBit(int n, int k) 
    {
        string s="0";
        for(int c=1;c<n&&s.size()<k;c++)
            s=s+"1"+reverse(s);
        return s[k-1];
    }
};
