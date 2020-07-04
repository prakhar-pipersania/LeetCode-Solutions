class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        int val=0;
        vector<int> A(arr.size());
        vector<int> B(queries.size());
        for(int i=0;i<arr.size();i++)
        {
            val^=arr[i];
            A[i]=val;
        }
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i][0]==0)
                B[i]=A[queries[i][1]];
            else if(queries[i][0]==queries[i][1])
                B[i]=arr[queries[i][1]];
            else
                B[i]=A[queries[i][0]-1]^A[queries[i][1]];
        }
        return B;
    }
};
