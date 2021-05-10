class Solution {
public:
    int numDifferentIntegers(string word) 
    {
        string t="";
        map<string,int> x;
        for(int i=0;i<word.size();i++)
        {
            if(word[i]>='0'&&word[i]<='9')
            {
                if(t.size()>0&&t[0]=='0')
                    t="";
                if(word[i]>='0'&&word[i]<='9')
                    t+=word[i];
            }
            if(i>0&&word[i-1]>='0'&&word[i-1]<='9'&&word[i]>='a'&&word[i]<='z')
            {
                x[t]++;
                t="";
            }
            if(i==word.size()-1&&word[i]>='0'&&word[i]<='9')
            {
                x[t]++;
            }
            
        }
        return x.size();
    }
};