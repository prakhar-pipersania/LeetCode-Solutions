class Solution {
public:
    int countTriplets(vector<int>& arr) 
    {
        int x,temp=0;
        for(int i=0;i<arr.size();i++)
            temp^=arr[i],arr[i]=temp;
        temp=0;
        for(int i=0;i<arr.size()-1;i++)
            for(int j=i+1;j<arr.size();j++)
                for(int k=j;k<arr.size();k++)
                {
                    if(i==0)
                        x=0;
                    else
                        x=arr[i-1];
                    if((x^arr[j-1])==(arr[j-1]^arr[k]))
                        temp++;
                }
        return temp;
    }
};
