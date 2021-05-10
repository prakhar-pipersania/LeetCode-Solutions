class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
    {
        int c=0;
        for(auto e: items)
        {
            if(ruleKey == "type" && e[0]==ruleValue)
            {
                c++;
            }
            else if(ruleKey == "color" && e[1]==ruleValue)
            {
                c++;
            }
            else if(ruleKey == "name" && e[2]==ruleValue)
            {
                c++;
            }
        }
        return c;
    }
};