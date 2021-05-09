class Solution {
public:
    int smallestRepunitDivByK(int K) 
    {
        if(K&1)
        {
            int i=1,len=1,old;
            while(1)
            {
                old=i%K;
                if(old)
                    i=(old*10)+1,len++;
                else
                    return len;
                if(i%K==1||i%K==old)
                    return -1;
            }
        }
        return -1;    
    }
};
