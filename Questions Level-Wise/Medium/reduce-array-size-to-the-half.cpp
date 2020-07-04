//More Memory Usage
class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        int x=0,size=0;
        unordered_map<int,int> A;
        multimap<int,int,greater<int>> B;
        for(int i=0;i<arr.size();i++)
            A[arr[i]]++;
        for(auto e: A)
            B.insert({e.second,e.first});
        for(auto e: B)
        {
            size+=e.first;
            x++;
            if(size>=(arr.size()/2))
                break;
        }
        return x;
    }
};
//OR
//Less Memory Usage
class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        int x=0,size=0;
        unordered_map<int,int> A;
        vector<int> B;
        for(int i=0;i<arr.size();i++)
            A[arr[i]]++;
        for(auto e: A)
            B.push_back(e.second);
        sort(B.begin(),B.end(),greater<>());
        for(auto e: B)
        {
            size+=e;
            x++;
            if(size>=(arr.size()/2))
                break;
        }
        return x;
    }
};
