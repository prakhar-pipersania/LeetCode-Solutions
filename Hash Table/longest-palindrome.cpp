class Solution {
public:
    int longestPalindrome(string s) 
    {
        int arrlow[26],arrupp[26],c=0,res=0;
        for(int i=0;i<26;i++)
            arrlow[i]=arrupp[i]=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                arrlow[s[i]-'a']++;
            else
                arrupp[s[i]-'A']++;
        }
        for(int i=0;i<26;i++)
        {
            if(arrlow[i]%2!=0||arrupp[i]%2!=0)
            {
                arrlow[i]-=arrlow[i]%2;
                arrupp[i]-=arrupp[i]%2;
                c=1;
            }
            res+=arrlow[i];
            res+=arrupp[i];
        }
        return (res+c);
    }
};
