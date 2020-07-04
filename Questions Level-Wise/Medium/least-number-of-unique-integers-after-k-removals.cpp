class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        int Size;
        map<int,int> A;
        multimap<int,int> B;
        for(int i=0;i<arr.size();i++)
            A[arr[i]]++;
        Size=A.size();
        for(auto e: A)
            B.insert({e.second,e.first});
        for(auto e: B)
        {
            if(e.first>k)
            {
                return Size;
            }
            else if(e.first==k)
            {
                Size--;
                return Size;
            }
            else
            {
                k-=e.first;
                Size--;
            }
        }
        return Size;
    }
};
