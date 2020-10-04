class Solution {
public:
    bool judgeSquareSum(int c) 
    {
        std::map<int ,int> com;
        int sroot=sqrt(c);
        for(int i=0;i<=sroot;i++)
            com[c-(i*i)]=i;
        for(int i=0;i<=sroot;i++)
        {
            auto search=com.find(i*i);
            if(search!=com.end())
                return true;
        }
        return false;    
    }
};
