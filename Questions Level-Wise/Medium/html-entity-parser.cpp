class Solution {
public:
    string entityParser(string text) 
    {
        int i=0,o=0,flag=0;
        string s="";
        vector<int> a(1,-1);
        unordered_map<string,char> x;
        x["quot"]=34,x["apos"]=39,x["amp"]='&',x["gt"]='>',x["lt"]='<',x["frasl"]='/';
        for(i=0;i<text.size();i++)
        {
            if(text[i]=='&'&&flag==0)
                a.push_back(i),flag=1;
            if(text[i]==';'&&flag==1)
                a.push_back(i),flag=0;
        }
        if(a.size()==2)
            a.pop_back();
        if(a.size()>1)
        {
            s+=text.substr(0,a[1]);
            for(o=0,i=1;i<a.size()-1;i++,o++)
            {
                if(o%2==0&&x.find(text.substr(a[i]+1,a[i+1]-a[i]-1))!=end(x))
                    s+=x[text.substr(a[i]+1,a[i+1]-a[i]-1)];
                else if(o%2==0&&x.find(text.substr(a[i]+1,a[i+1]-a[i]-1))==end(x))
                    s+=text.substr(a[i],a[i+1]-a[i]+1);
                else
                    s+=text.substr(a[i]+1,a[i+1]-a[i]-1);
            }
        }
        s+=text.substr(a[a.size()-1]+1,text.size()-a[a.size()-1]-1);
        return s;
    }
};
