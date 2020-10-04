class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) 
    {
        int n,index;
        vector<int> x;
        for(n=A.size();n>0;n--)
        { 
            index=0;
            for(int i=0;A[i]!=n;i++)
                index=i+1;
            index++;
            if(index!=n)
            {
                if(index>1)
                    reverse(A.begin(),A.begin()+index),x.push_back(index);
                reverse(A.begin(),A.begin()+n),x.push_back(n);
            }
        }
        return x;    
    }
};
