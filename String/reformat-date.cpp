class Solution {
public:
    string reformatDate(string date) 
    {
        int i;
        vector<int> space;
        vector<string> month={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
        string x;
        space.reserve(3);
        for(i=0;i<date.size();i++)
            if(date[i]==' ')
                space.push_back(i);
        space.push_back(i);
        x+=date.substr(space[1]+1,space[2]-space[1]-1);
        x+='-';
        for(int i=0;i<month.size();i++)
            if(date.substr(space[0]+1,space[1]-space[0]-1)==month[i])
            {
                if(i+1<10)
                    x+='0';
                else
                    x+='1';
                x+='0'+((i+1)%10);
                break;
            }
        x+='-';
        if(date[1]>='a'&&date[1]<='z')
            x+='0';
        for(i=0;date[i]>='0'&&date[i]<='9';i++)
            x+=date[i];
        return x;
    }
};
