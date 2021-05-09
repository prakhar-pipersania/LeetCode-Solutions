class Solution {
public:
    int totalMoney(int n) 
    {
        int c=0;
        for(int i=1;n;i++)
        {
            for(int j=i;n&&j<i+7;j++,n--)
            {
                c+=j;
            }
        }
        return c;
    }
};