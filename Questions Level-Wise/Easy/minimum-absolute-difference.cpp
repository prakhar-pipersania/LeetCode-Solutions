class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        int a=INT_MAX;
        vector<int> B(2);
        vector<vector<int>> A;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++)
            if(arr[i+1]-arr[i]<a)
            {
                a=arr[i+1]-arr[i];
                if(a==1)
                    break;
            }
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]==a)
            {
                B[0]=arr[i];
                B[1]=arr[i+1];
                A.push_back(B);
            }
        }
        return A;
    }
};
