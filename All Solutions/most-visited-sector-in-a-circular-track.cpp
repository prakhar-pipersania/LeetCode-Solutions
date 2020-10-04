class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) 
    {
        int max=0;
        vector<int> a;
        vector<int> track(n);
        unordered_map<int,int> x;
        for(int i=0;i<n;i++)
            track[i]=i+1;
        for(int i=0;i<rounds.size()-1;i++)
            for(int j=rounds[i]-1;track[j%n]!=rounds[i+1];j++)
                x[track[j%n]]++;
        max=0,x[rounds[rounds.size()-1]]++;
        for(auto e: x)
        {
            if(e.second==max)
                a.push_back(e.first);
            else if(e.second>max)
                a.resize(0),a.push_back(e.first),max=e.second;
        }
        sort(a.begin(),a.end());
        return a;
    }
};
