class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) 
    {
        int z=0,c,f=0,flag=0;
        vector<int> res(cells.size());
        vector<int> x(cells.size());
        for(int i=0;i<cells.size();i++)
            res[i]=cells[i];
        for(int i=0;i<N;i++)
        {
            for(int j=1;j<cells.size()-1;j++)
                res[j-1]==res[j+1]?x[j]=1:x[j]=0;
            if(f==0)
            {
                f=1;
                for(int j=0;j<cells.size();j++)
                    cells[j]=x[j];
            }
            c=0;
            for(int j=0;j<cells.size();j++)
                if(res[j]==cells[j])
                    c++;
            if(c==8&&flag<2)
            {
                if(z!=0)
                {
                    if(i-1!=0)
                        N=(2*(i-1))+(N%(i-1));
                    else
                        break;
                }
                z++,flag++;
            }
            for(int j=0;j<cells.size();j++)
                res[j]=x[j];
        }
        return res;
    }
};