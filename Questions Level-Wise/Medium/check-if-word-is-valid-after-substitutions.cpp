class Solution {
public:
    bool isValid(string s) 
    {
        if(s.size()%3!=0)
            return false;
        int size;
        while(s.size()>0)
        {
            size=s.size();
            for(int i=0;s.size()>0&&i<s.size()-2;i++)
                if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')
                    s=s.substr(0,i)+s.substr(i+3,s.size()-i-3),i--;
            if(s.size()==size)
                return false;
        }
        return true;
    }
};
