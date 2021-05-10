class Solution {
public:
    vector<string> printVertically(string s) 
    {
        s=" "+s+" ";
        int start=0,size=0;
        vector<string> y;
        for(int i=1;i<s.size();++i)
        {
            if(s[i]==' ')
            {
                start++;
                y.push_back(s.substr(start,i-start));
                start=i;
                if(y.back().size()>size)
                    size=y.back().size();
            }
        }
        vector<string> x(size);
        for(int i=0;i<size;++i)
            for(int j=0;j<y.size();++j)
                x[i]+=(i<y[j].size()?y[j][i]:' ');
        for(int i=0;i<size;++i)
        {
            start=x[i].size()-1;
            while(x[i][start]==' ')
                start--;
            x[i].resize(start+1);
        }
        return x;
    }
};