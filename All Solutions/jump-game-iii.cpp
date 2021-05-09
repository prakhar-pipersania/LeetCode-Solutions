class Solution {
public:
    void send(vector<int> &arr, int s,bool &f)
    {
        if(!arr[s])
            f=true;
        else if(arr[s]>0)
        {
            int t1=s+arr[s],t2=s-arr[s];
            arr[s]=-1;
            if(!f&&t1>=0&&t1<arr.size())
                send(arr,t1,f);
            if(!f&&t2>=0&&t2<arr.size())
                send(arr,t2,f);
        }
    }
    bool canReach(vector<int>& arr, int start) 
    {
        bool f=false;
        send(arr,start,f);   
        return f;
    }
};
