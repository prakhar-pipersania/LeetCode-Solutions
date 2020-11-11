class Solution {
public:
    double trimMean(vector<int>& arr) 
    {
        double x;
        int sum=0,size=(arr.size()*5)/100;
        sort(arr.begin(),arr.end());
        for(int i=size;i<arr.size()-size;i++)
            sum+=arr[i];
        x=sum/(((arr.size()-(2*size)))*1.0);
        return x;
    }
};
