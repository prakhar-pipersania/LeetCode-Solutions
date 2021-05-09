class Solution {
public:
    int maximumScore(int a, int b, int c) 
    {
        int sum,get=0,s=min({a,b,c});
        if(a==s)
        {
            sum=(b+c-a)/2;
            if(b>sum)
            {
                get=b-sum;
                b=sum;
            }
            if(c>sum)
            {
                c=c-(a-get);
            }
            s+=min(b,c);
        }
        else if(b==s)
        {
            sum=(a+c-b)/2;
            if(a>sum)
            {
                get=a-sum;
                a=sum;
            }
            if(c>sum)
            {
                c=c-(b-get);
            }
            s+=min(a,c);
        }
        else
        {
            sum=(a+b-c)/2;
            if(a>sum)
            {
                get=a-sum;
                a=sum;
            }
            if(b>sum)
            {
                b=b-(c-get);
            }
            s+=min(a,b);
        }
        return s;
    }
};