class Solution {
public:
    bool isRobotBounded(string path) 
    {
        int x=0,y=0;
        char pole='N';
        unordered_map<char,pair<char,char>> dir;
        dir['N']={'W','E'};
        dir['W']={'S','N'};
        dir['E']={'N','S'};
        dir['S']={'E','W'};
        for(int i=0;i<path.size();i++)
        {
            if(path[i]=='L')
                pole=dir[pole].first;
            else if(path[i]=='R')
                pole=dir[pole].second;
            else
            {
                if(pole=='N')
                    y++;
                else if(pole=='S')
                    y--;
                else if(pole=='E')
                    x++;
                else
                    x--;
            }
        }
        if((x==0&&y==0)||pole!='N')
            return true;
        return false;
    }
};
