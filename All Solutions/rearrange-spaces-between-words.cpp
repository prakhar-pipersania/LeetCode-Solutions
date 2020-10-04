class Solution {
public:
    string reorderSpaces(string text) 
    {
        string s;
        s.reserve(text.size());
        int i,words,space=0,begin,end,flag=0;
        vector<int> x;
        for(i=0;i<text.size();i++)
        {
            if(flag==0&&text[i]>='a'&&text[i]<='z')
                x.push_back(i),flag=1;
            if(text[i]==' ')
            {
                space++;
                if(flag)
                    x.push_back(i-1),flag=0;   
            }
        }
        if(flag)
            x.push_back(i-1);
        words=x.size()/2;
        if(words-1!=0)
        {
            begin=space/(words-1);
            end=space%(words-1);
        }
        else
        {
            end=space;
        }
        for(int i=0;i<x.size();i+=2)
        {
            s+=text.substr(x[i],x[i+1]-x[i]+1);
            if(i+2!=x.size())
                for(int t=begin;t;t--)
                    s+=" ";
        }
        for(int t=end;t;t--)
            s+=" ";
        return s;
    }
};
