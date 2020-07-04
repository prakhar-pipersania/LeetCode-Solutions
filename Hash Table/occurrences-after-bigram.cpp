class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) 
    {
        int i;
        vector<string> A;
        vector<int> space(1,-1);
        string B=first+' '+second;
        text+=' ';
        for(i=0;i<text.size();i++)
            if(text[i]==' ')
                space.push_back(i);
        space.push_back(i);
        if(space.size()<4)
            return A;
        for(i=0;i<space.size()-3;i++)
            if(text.substr(space[i]+1,space[i+2]-space[i]-1)==B&&space[i+3]-space[i+2]-1!=0)
                A.push_back(text.substr(space[i+2]+1,space[i+3]-space[i+2]-1));
        return A;
    }
};
