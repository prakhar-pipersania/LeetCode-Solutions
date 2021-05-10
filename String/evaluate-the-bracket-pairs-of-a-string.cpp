class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) 
    {
        int st=-1;
        string out="";
        out.reserve(s.size());
        map<string,string> x;
        for(int i=0;i<knowledge.size();i++)
            x[knowledge[i][0]]=knowledge[i][1];
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st=i;
            if(st==-1)
                out+=s[i];
            if(s[i]==')')
            {
                out+=(x.find(s.substr(st+1,i-st-1))==end(x)?"?":x[s.substr(st+1,i-st-1)]);
                st=-1;
            }
        }
        return out;
    }
};