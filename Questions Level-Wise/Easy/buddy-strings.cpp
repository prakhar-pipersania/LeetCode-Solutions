class Solution {
public:
    bool buddyStrings(string A, string B) 
    {
        if(A.size()!=B.size())
            return false;
        int x,y,flag=0;
        vector<int> a(26);
        for(int i=0;i<A.size();i++)
        {
            a[A[i]-'a']++;
            if(A[i]!=B[i])
            {
                if(!flag)
                    x=i;
                else if(flag==1)
                    y=i;
                else
                    return false;
                flag++;
            }
        }
        if(!flag)
            for(auto e: a)
                if(e>1)
                    return true;
        return flag==2&&A[x]==B[y]&&B[x]==A[y]?true:false;
    }
};
