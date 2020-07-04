class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) 
    {
        int sum=0;
        vector<int> A(2);
        if(S.size()==0)
            return A;
        A[0]=1;
        for(int i=0;i<S.size();i++)
        {
            if(sum+widths[S[i]-97]<=100)
            {
                sum+=widths[S[i]-97];
            }
            else
            {
                A[0]++;
                sum=widths[S[i]-97];
            }
        }
        A[1]=sum;
        return A;
    }
};
