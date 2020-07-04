class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) 
    {
        vector<int> a(26);
        vector<int> b(26);
        string s;
        int c,size=INT_MAX;
        for(int i=0;licensePlate[i]!='\0';i++)
        {
            if(licensePlate[i]>='A'&&licensePlate[i]<='Z')
                a[licensePlate[i]-'A']++;
            else if(licensePlate[i]>='a'&&licensePlate[i]<='z')
                a[licensePlate[i]-'a']++;
        }
        for(int i=0;i<words.size();i++)
        {
            c=0;
            if(words[i].size()<size)
            {
                for(int j=0;words[i][j]!='\0';j++)
                    b[words[i][j]-'a']++;
                for(int j=0;j<26;j++)
                    if(a[j]<=b[j])
                        c++;
                if(c==26)
                {
                    s=words[i];
                    size=words[i].size();
                }
            }
            fill(b.begin(),b.end(),0);
        }
        return s;
    }
};
