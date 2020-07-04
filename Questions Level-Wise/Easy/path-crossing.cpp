class Solution {
public:
    bool isPathCrossing(string path) 
    {
        int sSize=1;
        vector<int> x(2,0);
        set<vector<int>> a;
        a.insert(x);
        for(int i=0;path[i]!='\0';i++)
        {
            sSize=a.size();
            if(path[i]=='N')
                x[0]++;
            else if(path[i]=='S')
                x[0]--;
            else if(path[i]=='E')
                x[1]++;
            else if(path[i]=='W')
                x[1]--;
            a.insert(x);
            if(sSize==a.size())
                return true;
        }
        return false;
    }
};
