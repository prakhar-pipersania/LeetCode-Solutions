class Solution {
public:
    bool wordPattern(string pattern, string str) 
    {
        vector<int> a (26,0);
        vector<int> space(1,0);
        string cmpstr;
        map<char,string> mapword;
        str.push_back(' ');
        for(int i=0;str[i]!='\0';i++)
            if(str[i]==' ')
                space.push_back(i);
        if(space.size()-pattern.size()!=1)
            return false;
        int val=0;
        for(int i=0;i<pattern.size();i++)
        {
            if(a[pattern[i]-97]==0)
            {
                int x=space[val],y=space[val+1]-space[val];
                if(space[val]!=0)
                    x++;
                else
                    y++;
                mapword[pattern[i]]=str.substr(x,y);
                a[pattern[i]-97]++;
            }
            val++;
        }
        for(auto e=begin(mapword);e!=end(mapword);e++)
            for(auto e1=begin(mapword);e1!=end(mapword);e1++)
                if(e->second==e1->second&&e->first!=e1->first)
                    return false;
        for(int i=0;i<pattern.size();i++)
            cmpstr+=mapword[pattern[i]];
        for(int i=0;str[i]!='\0';i++)
            if(str[i]!=cmpstr[i])
                return false;
        return true;
    }
};
