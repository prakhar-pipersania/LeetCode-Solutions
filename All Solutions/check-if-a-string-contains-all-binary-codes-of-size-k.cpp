class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        int Size=pow(2,k);
        set<string> bno;
        if(s.size()<k)
            return false;
        for(int i=0;i<=s.size()-k;i++)
        {
            bno.insert(s.substr(i,k));
            if(bno.size()==Size)
                return true;
        }
        return false;
    }
};
