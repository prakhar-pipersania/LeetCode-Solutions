class Solution {
public:
    vector<int> partitionLabels(string S) 
    {
        int z=0;
        vector<int> A;
        unordered_map<char,int> last;
        for(int i=0;S[i]!='\0';i++)
            last[S[i]]=i;
        for(int i=0;S[i]!='\0';i++)
        {
            if(last[S[i]]>z)
                z=last[S[i]];
            if(i==z)
            {
                A.push_back(z+1);
                z=0;
            }
        }
        for(int i=A.size()-1;i>0;i--)
            A[i]-=A[i-1];
        return A;
    }
};
