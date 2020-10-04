class Solution {
public:
    void genpar(vector<string> &res,string temp,int inner,int outer)
    {
        if(inner==0&&outer==0)
            res.push_back(temp);
        else
        {
            if(inner>0)
                temp+='(',genpar(res,temp,inner-1,outer),temp.resize(temp.size()-1);
            if(inner!=outer&&outer>0)
                temp+=')',genpar(res,temp,inner,outer-1),temp.resize(temp.size()-1);
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> res;
        if(n==0)
            res.resize(1);
        else
            genpar(res,"",n,n);
        return res;
    }
};
