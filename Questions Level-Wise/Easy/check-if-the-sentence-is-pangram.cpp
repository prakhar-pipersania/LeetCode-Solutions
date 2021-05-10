class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        vector<int> x(26);
        for(auto e: sentence)
        {
            x[e-'a']++;
        }
        for(auto e: x)
        {
            if(e==0)
                return false;
        }
        return true;
    }
};