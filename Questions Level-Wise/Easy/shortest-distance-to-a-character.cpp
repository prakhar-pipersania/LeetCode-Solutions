class Solution {
public:
    vector<int> shortestToChar(string S, char C) 
    {
        int flag=0,s;
        vector<int> a(S.size());
        for(int i=0;i<S.size();i++)
        {
            for(int val=1;S[i]!=C&&i<S.size();i++,val++)
                a[i]=val;
            if(flag==0&&S[i]==C)
                s=i,flag=1;
        }
        for(int temp=s,i=0;i<s;i++)
            a[i]=temp,temp--;
        for(int i=S.size()-1;i>=s;)
        {
            if(S[i]==C)
            {
                i--;
                for(int val=1;i>=s&&S[i]!=C;i--,val++)
                    if(val<a[i])
                        a[i]=val;
            }
            else
            {
                i--;
            }
        }
        cout<<"1";
        return a;
    }
};
