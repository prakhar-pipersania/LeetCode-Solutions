class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int> a;
        a.reserve(40);
        int i=low,c=0,first,num=0,x,flag;
        while(i>9)
        {
            c++;
            i/=10;
        }
        first=i%10;c++;
        while(num<=high)
        {
            num=0;x=0,flag=0;
            for(int j=first;x<c;j++)
            {
                num=(num*10)+j;
                x++;
                if(j==10)
                    flag=1;
            }
            if(num>=low&&num<=high&&flag==0)
                a.push_back(num);
            first++;
            if(first+c>10)
            {
                c++;
                first=1;
            }
        }
        return a;
    }
};
