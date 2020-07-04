class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        vector<int> temp(arr.size());
        vector<int> a;
        a.reserve(arr.size());
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            int x=arr[i];
            while(x>0)
            {
                temp[i]+=x%2;
                x/=2;
            }
        }
        for(int i=0;i<32;i++)
            for(int j=0;j<arr.size();j++)
                if(temp[j]==i)
                    a.push_back(arr[j]);
        return a;
    }
};
