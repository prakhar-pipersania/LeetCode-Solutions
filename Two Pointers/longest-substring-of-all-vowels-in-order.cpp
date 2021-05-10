class Solution {
public:
    int longestBeautifulSubstring(string word) 
    {
        int t=0,o=0,l=0;
        for(int i=0;i<word.size();)
        {
            if(word[i]=='a')
            {
                o=t=0;
                while(i<word.size()&&word[i]=='a')
                    t++,i++;
                if(o==t)
                    t=0;
                else
                {
                    o=t;
                    while(i<word.size()&&word[i]=='e')
                        t++,i++;
                    if(o==t)
                        t=0;
                    else
                    {
                        o=t;
                        while(i<word.size()&&word[i]=='i')
                            t++,i++;
                        if(o==t)
                            t=0;
                        else
                        {
                            o=t;
                            while(i<word.size()&&word[i]=='o')
                                t++,i++;
                            if(o==t)
                                t=0;
                            else
                            {
                                o=t;
                                while(i<word.size()&&word[i]=='u')
                                    t++,i++;
                                if(o==t)
                                    t=0;
                            }
                        }
                    }
                }
            }
            else
            {
                i++;
            }
            l=max(l,t);
        }
        return l;
    }
};