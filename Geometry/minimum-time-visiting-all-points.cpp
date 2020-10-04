class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) 
    {
        int c=0;
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]>=points[0][0]&&points[i][1]<=points[0][1])
            {
                while(points[i][0]!=points[0][0]||points[i][1]!=points[0][1])
                {
                    if(points[i][0]>points[0][0])
                        points[0][0]++;
                    if(points[i][1]<points[0][1])
                        points[0][1]--;
                    c++;
                }
            }
            else if(points[i][0]<=points[0][0]&&points[i][1]>=points[0][1])
            {
                while(points[i][0]!=points[0][0]||points[i][1]!=points[0][1])
                {
                    if(points[i][0]<points[0][0])
                        points[0][0]--;
                    if(points[i][1]>points[0][1])
                        points[0][1]++;
                    c++;
                }
            }
            else if(points[i][0]>points[0][0]||points[i][1]>points[0][1])
            {
                while(points[i][0]!=points[0][0]||points[i][1]!=points[0][1])
                {
                    if(points[i][0]>points[0][0]&&points[i][1]>points[0][1])
                        points[0][0]++,points[0][1]++;
                    else if(points[i][0]>points[0][0])
                        points[0][0]++;
                    else if(points[i][1]>points[0][1])
                        points[0][1]++;
                    c++;
                }
            }
            else if (points[i][0]<points[0][0]||points[i][1]<points[0][1])
            {
                while(points[i][0]!=points[0][0]||points[i][1]!=points[0][1])
                {
                    if(points[i][0]<points[0][0]&&points[i][1]<points[0][1])
                        points[0][0]--,points[0][1]--;
                    else if(points[i][0]<points[0][0])
                        points[0][0]--;
                    else if(points[i][1]<points[0][1])
                        points[0][1]--;
                    c++;
                }
            }
        }
        return c;
    }
};
