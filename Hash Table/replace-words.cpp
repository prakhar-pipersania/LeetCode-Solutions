class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) 
    {
        int flag=0;
        string res,temp,temp2;
        unordered_map<string,int> a;
        multimap<int,string> b;
        vector<int> space(1,-1);
        sentence+=' ';
        for(int i=0;i<dict.size();i++)
            a[dict[i]]=dict[i].size();
        for(auto e: a)
            b.insert({e.second,e.first});
        for(int i=0;sentence[i]!='\0';i++)
            if(sentence[i]==' ')
                space.push_back(i);
        for(int i=0;i<space.size()-1;i++)
        {
            flag=0,temp2=sentence.substr(space[i]+1,space[i+1]-space[i]-1);
            for(auto e: b)
            {
                temp=temp2;
                if(temp.size()>=(e.second).size())
                {
                    temp.resize((e.second).size());
                    if(temp==e.second)
                    {
                        res+=e.second,res+=' ',flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
                res+=temp2,res+=' ';
        }
        res.resize(res.size()-1);
        return res;
    }
};
