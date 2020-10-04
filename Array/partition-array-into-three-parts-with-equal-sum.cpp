class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) 
    {
        int sum=0,c=0,partitionSize=0;
        for(auto e: A)
            partitionSize+=e;
        partitionSize/=3;
        for(auto e: A)
        {
            sum+=e;
            if(sum==partitionSize)
                c++,sum=0;
        }
        return ((!sum)&&(c>2))?true:false;
    }
};
