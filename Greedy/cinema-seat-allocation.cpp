class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) 
    {
        int num=0,res=0,v=0,a[8];
        map<int,vector<int>> row;
        for(int i=0;i<reservedSeats.size();i++)
            row[reservedSeats[i][0]].push_back(reservedSeats[i][1]);
        for(auto e=begin(row);e!=end(row);e++)
        {
            num++;
            for(int i=0;i<8;i++)
                a[i]=0;
            for(auto c:e->second)
            {
                switch(c)
                {
                    case 2:a[0]++;break;
                    case 3:a[1]++;break;
                    case 4:a[2]++;break;
                    case 5:a[3]++;break;
                    case 6:a[4]++;break;
                    case 7:a[5]++;break;
                    case 8:a[6]++;break;
                    case 9:a[7]++;break;
                }
            }
            if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0)
                v++;
            if(a[4]==0&&a[5]==0&&a[6]==0&&a[7]==0)
                v++;
            if(v==0&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0)
                v++;
            res+=v;
            v=0;
        }
        res=res+((n-num)*2);
        return res;
    }
};
