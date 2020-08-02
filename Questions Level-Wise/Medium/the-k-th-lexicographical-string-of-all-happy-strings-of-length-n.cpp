class Solution {
public:
    void findstrings(string s,string temp,string &res,int &cur,int n,int k)
    {
        for(int i=0;i<s.size();i++)
        {
            temp+=s[i];
            if(temp.size()==n)
            {
                cur++;
                if(cur==k)
                    res=temp;
            }
            if(res.size()>0)
                break;
            if(temp.size()<n)
            {
                if(s[i]=='a')
                    findstrings("bc",temp,res,cur,n,k);
                else if(s[i]=='b')
                    findstrings("ac",temp,res,cur,n,k);
                else
                    findstrings("ab",temp,res,cur,n,k);
            }
            temp.resize(temp.size()-1);
        }
    }
    string getHappyString(int n, int k) 
    {
        int cur=0;
        string temp,res;
        findstrings("abc",temp,res,cur,n,k);
        return res;
    }
};
