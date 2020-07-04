class Solution {
public:
    int distributeCandies(vector<int>& candies) 
    {
        unordered_map<int,int> A;
        for(int i=0;i<candies.size();i++)
        {
            A[candies[i]]++;
            if(A.size()==candies.size()/2)
                break;
        }
        return A.size();
    }
};
