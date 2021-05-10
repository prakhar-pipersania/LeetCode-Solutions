class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) 
    {
        int alive=0,index=0;
        vector<int> x(101);
        sort(logs.begin(),logs.end());
        for(int i=0;i<logs.size();i++)
        {
            for(int j=logs[i][0]-1950;j<logs[i][1]-1950;++j)
            {
                x[j]++;
                if(x[j]>index)
                {
                    index=x[j];
                    alive=j+1950;
                }
            }
        }
        return alive;
    }
};