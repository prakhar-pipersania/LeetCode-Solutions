class Solution {
public:
    string inttostr(int num)
    {
        string s;
        for(;num>0;num/=10)
            s+=('0'+num%10);
        reverse(s.begin(),s.end());
        return s;
    }
    vector<string> subdomainVisits(vector<string>& cpdomains) 
    {
        unordered_map<string,int> a;
        vector<string> res;
        string temp;
        for(int i=0;i<cpdomains.size();i++)
        {
            for(int x=0,j=0;cpdomains[i][j]!='\0';j++)
            {
                for(;cpdomains[i][j]>='0'&&cpdomains[i][j]<='9';j++)
                    x=(x*10)+(cpdomains[i][j]-48);
                if(cpdomains[i][j]==' '||cpdomains[i][j]=='.')
                    a[cpdomains[i].substr(j+1,cpdomains[i].size()-j)]+=x;
            }
        }
        for(auto e: a)
        {
            temp+=inttostr(e.second),temp+=' ',temp+=e.first;
            res.push_back(temp);
            temp.resize(0);
        }
        return res;
    }
};