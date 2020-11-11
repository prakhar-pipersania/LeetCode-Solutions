class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) 
    {
        unordered_map<int,int> x;
        for(auto e: arr)
            x[e]++;
        for(auto e: pieces)
            for(auto e1: e)
                x[e1]++;
        for(auto e: x)
            if(e.second<2)
                return false;
        for(int i=0;i<arr.size();i++)
            x[arr[i]]=i;
        for(auto e: pieces)
            if(e.size()>1)
                for(int i=0,j=x[e[0]];i<e.size();i++,j++)
                    if(e[i]!=arr[j])
                        return false;
        return true;
    }
};
