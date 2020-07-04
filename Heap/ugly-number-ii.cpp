class Solution {
public:
    int nthUglyNumber(int n) 
    {
        int x=1,flag=0;
        vector<int> ugly={2,3,5};
        map<int,int> uglynumber;
        uglynumber[1]=1;
        for(auto i: uglynumber)
        {
            if(i.first>=INT_MAX/2)
                break;
            for(auto j: ugly)
            {
                if((long)i.first*j<INT_MAX)
                    uglynumber[i.first*j]=1;
                if(uglynumber.size()>=1.5*n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        cout<<uglynumber.size();
        for(auto e=begin(uglynumber);e!=end(uglynumber);e++,x++)
            if(x==n)
                return e->first;
        return 0;
    }
};
