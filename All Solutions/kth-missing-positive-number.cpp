class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int c=0;
        map<int,int> x;
        for(int i=0;i<arr.size();i++)
            x[arr[i]]=1;
        for(int i=1;;i++)
        {
            if(x[i]==0)
                c++;
            if(c==k)
                return i;
        }
        return 0;
    }
};
