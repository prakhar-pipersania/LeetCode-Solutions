class Solution {
public:
    int numberOfMatches(int n) 
    {
        int no=0;
        while(n>1)
        {
            if(n%2)
                no+=(n-1)/2,n=(n-1)/2+1;
            else
                no+=n/2,n/=2;
        }
        return no;
    }
};
