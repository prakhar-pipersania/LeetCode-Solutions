class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int sum=0;
        for(int i=0;i<arr.size();i++)
            for(int s=1;i+s<=arr.size();s+=2)
                for(int j=i;j<i+s;j++)
                    sum+=arr[j];
        return sum;
    }
};
