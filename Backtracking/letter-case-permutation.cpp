class Solution {
public:
    vector<string> letterCasePermutation(string S) 
    {
        string temp;
        vector<string> res(1,S);
        for(int i=0;i<S.size();i++)
            if((S[i]>='a'&&S[i]<='z')||(S[i]>='A'&&S[i]<='Z'))
                for(int j=0,size=res.size();j<size;j++)
                    temp=res[j],temp[i]^=32,res.push_back(temp);
        return res;
    }
};
