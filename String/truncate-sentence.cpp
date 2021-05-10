class Solution {
public:
    string truncateSentence(string s, int k) 
    {
        int c=0,i=0;
        for(;i<s.size();i++)
            if(s[i]==' ')
                c++;
        c++,i--;
        while(c>k)
        {
            if(s[i]==' ')
                c--;
            i--;
        }
        return s.substr(0,i+1);
    }
};