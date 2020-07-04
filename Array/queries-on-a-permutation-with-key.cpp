class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) 
    {
        vector<int> res(queries.size());
        unordered_map<int,int> a;
        for(int i=0;i<m;i++)
            a[i+1]=i;
        for(int i=0;i<queries.size();i++)
        {
            res[i]=a[queries[i]];
            for(int j=1;j<=m;j++)
                if(a[j]<a[queries[i]])
                    a[j]++;
            a[queries[i]]=0;
        }
        return res;
    }
};
