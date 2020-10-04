class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) 
    {
        if(k==1)
            return true;
        if(nums.size()%k!=0)
            return false;
        map<int,int> x;
        vector<int> a(k);
        for(auto e: nums)
            x[e]++;
        while(x.size()>0)
        {
            int i=0;
            for(auto e=begin(x);e!=end(x)&&i<k;e++)
            {
                if(i==0)
                {
                    a[i++]=e->first;
                    e->second--;
                    if(e->second==0)
                        x.erase(e->first);
                }
                else
                {
                    if(a[i-1]==e->first-1)
                    {
                        a[i++]=e->first;
                        e->second--;
                        if(e->second==0)
                            x.erase(e->first);
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            if(i<k)
                return false;
        }
        return true; 
    }
};