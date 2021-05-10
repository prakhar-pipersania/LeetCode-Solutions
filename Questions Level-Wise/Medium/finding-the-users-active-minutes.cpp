class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) 
    {
        unordered_map<int,unordered_set<int>> m;
        vector<int> x(k);
        for(auto e: logs)
            m[e[0]].insert(e[1]);
        for(auto e: m)
            if(e.second.size()<=k)
                x[e.second.size()-1]++;
        return x;
    }
};