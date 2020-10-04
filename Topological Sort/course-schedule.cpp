class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        int o,n,count;
        unordered_map<int,int> done;
        map<int,vector<int>> x;
        for(int i=0;i<numCourses;i++)
            x[i];
        for(int i=0;i<prerequisites.size();i++)
            x[prerequisites[i][0]].push_back(prerequisites[i][1]);
        while(x.size()>0)
        {
            o=x.size();
            for(auto e: x)
            {
                if(e.second.size()<=done.size())
                {
                    count=0;
                    for(auto e1: e.second)
                        if(done[e1]==1)
                            count++;
                    if(count==e.second.size())
                        done[e.first]=1,x.erase(e.first);
                }
            }
            n=x.size();
            if(o==n)
                return false;
        }
        return true;    
    }
};
