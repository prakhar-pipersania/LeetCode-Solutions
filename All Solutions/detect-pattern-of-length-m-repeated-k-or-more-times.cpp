class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) 
    {
        if((m*k)>arr.size())
            return false;
        if(k==1)
            return true;
        int c=0,max=0;
        vector<int> x,y;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i;j<arr.size()&&j<i+m;j++)
                x.push_back(arr[j]);
            for(int j=i;j<arr.size();j+=m)
            {
                for(int k=j;k<arr.size()&&k<j+m;k++)
                    y.push_back(arr[k]);
                if(x==y)
                    c++;
                else if(c>0&&x!=y)
                    break;
                y.resize(0);
            }
            if(c>max)
                max=c;
            if(max>=k)
                return true;
            c=0,x.resize(0),y.resize(0);
        }
        return false;
    }
};
