class Solution {
public:
    int getWinner(vector<int>& arr, int k) 
    {
        int c,max=0;
        for(int i=0;i<arr.size();i++)
            if(arr[i]>max)
                max=arr[i];
        for(int i=0;arr[i]!=max;)
        {
            i==0?c=0:c=1;
            for(int j=i+1;j<arr.size()&&arr[j]<arr[i];j++)
                c++;
            if(c>=k)
                return arr[i];
            i==0?i+=c+1:i+=c;
        }
        return max;
    }
};
