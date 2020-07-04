//Runtime: 0 ms   Memory Usage: 6 MB
class Solution {
public:
    int minFlips(int a, int b, int c) 
    {
        int i,x=0;
        vector<int> veca(32,0);
        vector<int> vecb(32,0);
        vector<int> vecc(32,0);
        for(i=0;a>0;a/=2,i++)
            veca[i]=a%2;
        for(i=0;b>0;b/=2,i++)
            vecb[i]=b%2;
        for(i=0;c>0;c/=2,i++)
            vecc[i]=c%2;
        for(int i=0;i<32;i++)
        {
            if(vecc[i]==0)
            {
                if(veca[i]!=0)
                    x++;
                if(vecb[i]!=0)
                    x++;
            }
            else
            {
                if(veca[i]==0&&vecb[i]==0)
                    x++;
            }
        }
        return x;
    }
};

//Runtime: 4 ms   Memory Usage: 5.9 MB
class Solution {
public:
    int minFlips(int a, int b, int c) 
    {
        int x=0;
        for(;a>0||b>0||c>0;a/=2,b/=2,c/=2)
        {
            if(c%2==0)
            {
                if((a%2)&(b%2)==1)
                    x+=2;
                else if((a%2)|(b%2)==1)
                    x++;
            }
            if(c%2!=0&&a%2==0&&b%2==0)
                x++;
        }
        return x;
    }
};
