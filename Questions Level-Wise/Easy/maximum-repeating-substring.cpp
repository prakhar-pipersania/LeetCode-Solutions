class Solution {
public:
    int maxRepeating(string seq, string word) 
    {
        if(word.size()>seq.size())
            return 0;
        int c=0,t=0,flag;
        for(int i=0;i<seq.size();i++)
        {
            flag=0;
            for(int j=0,k=i;j<word.size()&&k<seq.size()&&word[j]==seq[k];j++,k++)
            {
                if(j+1==word.size())
                    t++,flag=1,i+=word.size()-1;
            }
            flag?c=max(c,t):t=0;
        }
        return c;
    }
};
