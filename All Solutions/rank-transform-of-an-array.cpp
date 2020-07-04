class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        int rank=1;
        map<int,int> A;
        for(int i=0;i<arr.size();i++)
            A[arr[i]]=0;
        for(auto e=begin(A);e!=end(A);e++)
            e->second=rank++;
        for(int i=0;i<arr.size();i++)
            arr[i]=A[arr[i]];
        return arr;
    }
};
