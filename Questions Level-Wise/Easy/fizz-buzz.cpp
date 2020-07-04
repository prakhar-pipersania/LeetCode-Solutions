class Solution {
public:
    string rstr(string S)
    {
        int j=S.size()-1;
        char temp;
        for(int i=0;i<S.size()/2;i++)
        {
            temp=S[i];
            S[i]=S[j];
            S[j]=temp;
            j--;
        }   
        return S;
    }
    vector<string> fizzBuzz(int n) 
    {
        int temp;
        vector<string> A;
        string res;
        A.reserve(n);
        for(int i=1;i<=n;i++)
        {
            if(i%3==0)
                res+="Fizz";
            if(i%5==0)
                res+="Buzz";
            if(i%3!=0&&i%5!=0)
            {
                temp=i;
                while(temp>0)
                {
                    res+='0'+(temp%10);
                    temp/=10;
                }
                res=rstr(res);
            }
            A.push_back(res);
            res.resize(0);
        }
        return A;
    }
};
