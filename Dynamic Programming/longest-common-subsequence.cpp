class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) 
    {
        int i,j,Size1=text1.size()+1,Size2=text2.size()+1;
        int arr[Size1][Size2];
        for(i=0;i<Size1;i++)
            for(j=0;j<Size2;j++)
                arr[i][j]=0;
        for(i=1;i<Size1;i++)
        {
            for(j=1;j<Size2;j++)
            {
                if(text1[i-1]==text2[j-1])
                    arr[i][j]=arr[i-1][j-1]+1;
                else if(arr[i][j-1]>arr[i-1][j])
                    arr[i][j]=arr[i][j-1];
                else
                    arr[i][j]=arr[i-1][j];
            }
        }
        return arr[i-1][j-1];
    }
};
