class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) 
    {
        vector<int> A(queries.size());
        vector<int> B(words.size());
        vector<int> count(26);
        for(int i=0;i<queries.size();i++)
        {
            fill(begin(count),end(count),0);
            for(int j=0;queries[i][j]!='\0';j++)
                count[queries[i][j]-97]++;
            for(int j=0;j<26;j++)
                if(count[j]>0)
                {
                    A[i]=count[j];
                    break;
                }
        }
        for(int i=0;i<words.size();i++)
        {
            fill(begin(count),end(count),0);
            for(int j=0;words[i][j]!='\0';j++)
                count[words[i][j]-97]++;
            for(int j=0;j<26;j++)
                if(count[j]>0)
                {
                    B[i]=count[j];
                    break;
                }
        }
        for(int i=0;i<queries.size();i++)
        {
            count[0]=0;
            for(int j=0;j<words.size();j++)
                if(B[j]>A[i])
                    count[0]++;
            A[i]=count[0];
        }
        return A;
    }
};
