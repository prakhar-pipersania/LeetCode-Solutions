class Solution {
public:
    void search(vector<int> bits,int &c,int cur)
    {
        if(cur==bits.size()-1)
            c=1;
        else if(cur==bits.size())
            c=0;
        else
            bits[cur]==0?search(bits,c,cur+1):search(bits,c,cur+2);
    }
    bool isOneBitCharacter(vector<int>& bits) 
    {
        int c=0;
        search(bits,c,0);
        return c;
    }
};
