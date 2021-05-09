class Solution {
public:
    long to_num(string s)
    {
        long x=0;
        for(auto e: s)
            x=(x*10)+(e-48);
        return x;
    }
    int nextGreaterElement(int n) 
    {
        string s=to_string(n);
        next_permutation(begin(s),end(s));
        if(s>to_string(n)&&to_num(s)<=INT_MAX)
            return to_num(s);
        return -1;
    }
};
