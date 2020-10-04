class Solution {
public:
    int countsubstr(int x)
    {
        int c=0,old=0,count=0;
        while(count<x)
            count++,old=c,c=count+old,c%=1000000007;
        return c;
    }
    int numSub(string s) 
    {
        int sum=0;
        vector<int> zero;
        if(s.size()>0&&s[0]=='1')
            zero.push_back(-1);
        if(s.size()>0)
            for(int i=0;i<s.size()-1;i++)
            {
                if(s[i]=='0'&&s[i+1]=='1')
                    zero.push_back(i);
                if(s[i]=='1'&&s[i+1]=='0')
                    zero.push_back(i+1);
            }
        if(s.size()>0&&s[s.size()-1]=='1')
            zero.push_back(s.size());
        if(zero.size()>1)
            for(int i=0;i<zero.size()-1;i+=2)
                sum+=countsubstr(zero[i+1]-zero[i]-1),sum%=1000000007;
        return sum;    
    }
};
