class Solution {
public:
    vector<int> bestCoordinate(vector<vector<int>>& tower, int radius) 
    {
        double d;
        int q,maxq=0; 
        vector<int> x(2);
        for(int i=0;i<tower.size();i++)
        {
            q=tower[i][2];
            for(int j=0;j<tower.size();j++)
            {
                if(j!=i)
                {
                    d=sqrt(pow(tower[i][0]-tower[j][0],2)+pow(tower[i][1]-tower[j][1],2));
                    if(d<=radius)
                        q+=(tower[j][2]/(1+d));
                }
            }
            if(q>=maxq)
            {
                if(q>maxq)
                    maxq=q,x[0]=tower[i][0],x[1]=tower[i][1];
                else
                {
                    if(tower[i][0]<x[0])
                        x[0]=tower[i][0],x[1]=tower[i][1];
                    else if(tower[i][0]==x[0]&&tower[i][1]<x[1])
                        x[1]=tower[i][1];
                }
            }
        }
        return x;
    }
};
