class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string x,y;
        for(auto e: word1)
            x+=e;
        for(auto e: word2)
            y+=e;
        return (x==y);
    }
};
