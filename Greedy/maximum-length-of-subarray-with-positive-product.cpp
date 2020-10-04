class Solution {
public:
    int getMaxLen(vector<int>& nums) 
    {
        int pos=0,temp=0,neg=0,val=0,c=0,flag=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                neg++;
                if(neg%2==1)
                    flag=1;
                else if(flag==1&&neg%2==0)
                    pos+=temp,temp=flag=0;
            }
            else if(flag==1&&nums[i]>0)
                temp++;
            else if(flag==0&&nums[i]>0)
                pos++;
            else
            {
                val=pos+neg;
                if(temp>0&&((temp+neg)>val))
                    val=temp+neg;
                if(neg%2==1)
                    val--;
                temp=flag=neg=pos=0;
                if(val>c)
                    c=val;
            }
        }
        val=pos+neg;
        if(temp>0&&((temp+neg)>val))
            val=temp+neg;
        if(neg%2==1)
            val--;
        if(val>c)
            c=val;
        pos=temp=neg=val=flag=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<0)
            {
                neg++;
                if(neg%2==1)
                    flag=1;
                else if(flag==1&&neg%2==0)
                    pos+=temp,temp=flag=0;
            }
            else if(flag==1&&nums[i]>0)
                temp++;
            else if(flag==0&&nums[i]>0)
                pos++;
            else
            {
                val=pos+neg;
                if(temp>0&&((temp+neg)>val))
                    val=temp+neg;
                if(neg%2==1)
                    val--;
                temp=flag=neg=pos=0;
                if(val>c2)
                    c2=val;
            }
        }
        val=pos+neg;
        if(temp>0&&((temp+neg)>val))
            val=temp+neg;
        if(neg%2==1)
            val--;
        if(val>c2)
            c2=val;
        return c>c2?c:c2;
    }
};
