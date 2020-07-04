class Solution {
public:
    int minDistance(string word1, string word2) 
    {
        int i,j,Size1=word1.size()+1,Size2=word2.size()+1,arr[Size1][Size2];
        for(i=0;i<Size1;i++)
            for(j=0;j<Size2;j++)
                arr[i][j]=0;
        for(i=1;i<Size1;i++)
            for(j=1;j<Size2;j++)
            {
                if(word1[i-1]==word2[j-1])
                    arr[i][j]=arr[i-1][j-1]+1;
                else if(arr[i][j-1]>arr[i-1][j])
                    arr[i][j]=arr[i][j-1];
                else
                    arr[i][j]=arr[i-1][j];
            }
        return ((word1.size()+word2.size())-(2*arr[i-1][j-1]));
    }
};
