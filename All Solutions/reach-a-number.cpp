class Solution {
public:
    int reachNumber(int target) 
    {
        target=abs(target);
        if(!target)
            return 0;
        int v=0;
        for(int i=1;i<=INT_MAX;i++)
        {
            v+=i;
            if(v>=target&&(v-target)%2==0)
                return i;
        }
        return 0;
    }
};
