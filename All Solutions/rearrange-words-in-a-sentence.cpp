class Solution {
public:
    string arrangeWords(string text) 
    {
        int i;
        string S;
        vector<int> space(1,-1);
        multimap<int,string> A;
        text+=' ';text[0]+=32;
        for(i=0;i<text.size();i++)
            if(text[i]==' ')
                space.push_back(i);
        space.push_back(i);
        for(i=0;i<space.size()-2;i++)
            A.insert({space[i+1]-space[i],text.substr(space[i]+1,space[i+1]-space[i]-1)});
        for(auto e: A)
        {
            S+=e.second;S+=' ';
        }
        S.resize(S.size()-1);
        S[0]-=32;
        return S;
    }
};
