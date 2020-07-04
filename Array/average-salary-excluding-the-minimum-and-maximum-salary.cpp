class Solution {
public:
    double average(vector<int>& salary) 
    {
        int c=0;
        double x=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++,c++)
            x+=salary[i];
        x/=c;
        return x;
    }
};
