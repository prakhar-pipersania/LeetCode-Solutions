class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c)
    {
        int x,y,z,count=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                for(int k=j+1;k<arr.size();k++)
                {
                    x=arr[i] - arr[j];
                    y=arr[j] - arr[k];
                    z=arr[i] - arr[k];
                    if(x<0)
                        x*=-1;
                    if(y<0)
                        y*=-1;
                    if(z<0)
                        z*=-1;
                    if(x<= a&&y<= b&&z<= c)
                        count++;
                }
            }
        }
        return count;
    }
};
