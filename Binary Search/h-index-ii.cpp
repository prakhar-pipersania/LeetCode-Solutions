class Solution {
public:
    int hIndex(vector<int> c) 
    {
        int low=0,mid,high=c.size()-1,h=0,val;
        while(low<=high)
        {
            mid=(low+high)/2;
            val=c.size()-mid;
            if(c[mid]>=val)
                h=val,high=mid-1;
            else
                low=mid+1;
        }
        return h;
    }
};
