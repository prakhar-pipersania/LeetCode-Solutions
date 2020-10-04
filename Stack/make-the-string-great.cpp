class Solution {
public:
    string makeGood(string s) 
    {
        while(1)
        {
            int old=s.size();
            for(int i=0;i<s.size()-1&&i>-1;i++)
                if(s[i+1]==(s[i]^32))
                {
                    s=s.substr(0,i)+s.substr(i+2,s.size()-(i+1));
                    if(s.size()==0)
                        return "";
                }
            if(s.size()==old)
                break;
        }
        return s;
    }
};
