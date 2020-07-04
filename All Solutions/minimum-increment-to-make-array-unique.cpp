class Solution {
public:
    int minIncrementForUnique(vector<int>& A) 
    {
        int c=0,count=0,sum=0,min=INT_MAX,val=0;
        queue<int> q;
        map<int,int> a;
        for(auto e: A)
        {
            a[e]++;
            if(a[e]>1)
                c++;
            if(e<min)
                min=e;
        }
        for(int i=min;sum!=c||count!=0;i++)
        {
            if(a[i]>1)
                count+=a[i]-1,sum+=a[i]-1;
            if(count>0&&a[i]==0)
                count--,q.push(i);
        }
        for(auto e=begin(a);e!=end(a);e++)
            while(e->second>1)
                val+=q.front()-e->first,e->second--,q.pop();
        return val;
    }
};
