class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) 
    {
        vector<string> res;
        unordered_map<string,int> count;
        vector<int> space1(1,-1);
        vector<int> space2(1,-1);
        A+=' ';B+=' ';
        for(int i=0;A[i]!='\0';i++)
            if(A[i]==' ')
                space1.push_back(i);
        for(int i=0;B[i]!='\0';i++)
            if(B[i]==' ')
                space2.push_back(i);
        for(int i=0;i<space1.size()-1;i++)
            count[A.substr(space1[i]+1,space1[i+1]-space1[i]-1)]++;
        for(int i=0;i<space2.size()-1;i++)
            count[B.substr(space2[i]+1,space2[i+1]-space2[i]-1)]++;
        for(auto e: count)
            if(e.second==1)
                res.push_back(e.first);
        return res;
    }
};
