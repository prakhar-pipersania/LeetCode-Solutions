class Solution {
public:
    string removeDuplicates(string s, int v) 
    {
        int k=0;
        vector<pair<char,int>> x={{s[0],1}};
        for(int i=1;i<s.size();++i)
        {
            if(s[i]==s[i-1])
            {
                x[k].second++;
            }
            else
            {
                x[k].second%=v;
                if(!x[k].second)
                    k--;
                if(k<0)
                {
                    k++;
                    x[k].first=s[i];
                    x[k].second=1;
                }
                else
                {
                    if(x[k].first==s[i])
                    {
                        x[k].second++;
                    }
                    else
                    {
                        k++;
                        if(k==x.size())
                        {
                            x.push_back({s[i],1});
                        }
                        else
                        {
                            x[k].first=s[i];
                            x[k].second=1;
                        }
                    }
                }
            }
        }
        x[k].second%=v;
        if(!x[k].second)
            k--;
        x.resize(k+1);
        k=0;
        for(int i=0;i<x.size();++i)
        {
            while(x[i].second)
            {
                s[k]=x[i].first;
                ++k;
                --x[i].second;
            }
        }
        s.resize(k);
        return s;
    }
};