class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        int sum=0;
        vector<int> A(26);
        vector<int> B(26);
        for(int i=0;i<chars.size();i++)
            A[chars[i]-97]++;
        for(int i=0;i<words.size();i++)
        {
            int flag=0;
            for(int j=0;j<26;j++)
                B[j]=A[j];
            for(int j=0;words[i][j]!='\0';j++)
            {
                B[words[i][j]-97]--;
                if(B[words[i][j]-97]<0)
                {
                    flag=1;break;
                }
            }
            if(flag==0)
                sum+=words[i].size();
        }
        return sum;
    }
};
