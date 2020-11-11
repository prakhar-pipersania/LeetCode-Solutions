class Solution {
public:
    int countVowelStrings(int n) 
    {
        if(n==1)
            return 5;
        int arr[5]={1,1,1,1,1};
        while(n-2)
            arr[1]+=arr[0],arr[2]+=arr[1],arr[3]+=arr[2],arr[4]+=arr[3],n--;
        return ((5*arr[0])+(4*arr[1])+(3*arr[2])+(2*arr[3])+(1*arr[4]));
    }
};
