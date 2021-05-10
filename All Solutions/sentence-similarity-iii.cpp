class Solution {
public:
    vector<string> split(string sent)
    {
        int s=-1;
        vector<string> x;
        for(int i=0;i<sent.size();i++)
        {
            if(sent[i]==' ')
                x.push_back(sent.substr(s+1,i-s-1)),s=i;
            if(i+1==sent.size())
                x.push_back(sent.substr(s+1,i-s));
        }
        return x;
    }
    bool solve(vector<string> &x,vector<string> &y)
    {
        int i,j;
        i=0,j=0;
        while(i<x.size()&&j<y.size()&&x[i]==y[j])
            y[j]="",i++,j++;
        i=x.size()-1,j=y.size()-1;
        while(i>=0&&j>=0&&x[i]==y[j])
            y[j]="",i--,j--;
        
        i=0;
        for(auto e:y)
            if(e!="")
                i++;
        return !(i>0);
    }
    bool areSentencesSimilar(string sentence1, string sentence2)
    {
        vector<string> x=split(sentence1),y=split(sentence2);
        return ((x.size()>y.size())?solve(x,y):solve(y,x));
    }
};