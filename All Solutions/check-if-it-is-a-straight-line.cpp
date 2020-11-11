class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& crd) 
    {
        //(y-y1)=m(x-x1) & y=mx+c
        if(crd[0][0]!=crd[1][0])
        {
            float m=(crd[0][1]-crd[1][1])/((crd[0][0]-crd[1][0])*1.0);
            int c=(-1*m*crd[1][0])+crd[1][1];
            for(int i=2;i<crd.size();i++)
                if(crd[i][1]!=((m*crd[i][0])+c))
                    return false;
        }
        else
        {
            for(int i=2;i<crd.size();i++)
                if(crd[i][0]!=crd[0][0])
                    return false;
        }
        return true;
    }
};
