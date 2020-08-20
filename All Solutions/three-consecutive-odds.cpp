class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        int flag=0;
        for(auto e: arr)
        {
            if(e%2==1)
                flag++;
            else if(flag>0&&e%2==0)
                flag--;
            if(flag==3)
                return true;
        }
        return false;
    }
};
