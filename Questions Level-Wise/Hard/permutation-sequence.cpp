class Solution {
public:
    void findper(string &s,vector<int> &v,int n, int k)
    {
        int fact=1,count,val;
        for(int i=1;i<=n;i++)
            fact*=i;
        for(count=0,val=0;count<=k;val++)
            count+=fact/n;
        count-=fact/n;
        if(k-count==0)
            val--;
        for(int i=0,x=0;i<v.size();i++)
            if(v[i]==0)
            {
                x++;
                if(x==val)
                {
                    val=i+1,v[i]=1;
                    break;
                }
            }
        s+='0'+val;
        if(k-count==0)
        {
            for(int i=v.size()-1;i>=0;i--)
                if(v[i]==0)
                    s+='0'+(i+1);
        }
        else
        {
            findper(s,v,n-1,k-count);
        }
    }
    string getPermutation(int n, int k) 
    {
        string s;
        vector<int> v(n);
        findper(s,v,n,k);
        return s;
    }
};
