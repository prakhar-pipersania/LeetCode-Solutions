class Solution {
public:
    int findTheWinner(int n, int k) {
        int remain=n-1,start=0,count=0;
        vector<int> x(n);
        for(int i=0;i<n;i++)
            x[i]=i+1;
        while(remain)
        {
            while(count!=k+1)
            {
                if(x[start])
                {
                    count++;  
                    if(count==k)
                    {
                        x[start]=0;
                    }
                    if(count==k+1)
                    {
                        count=0;
                        break;
                    }
                }
                start=(start+1)%n;
            }
            remain--;
        }
        return start+1;
    }
};