class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) 
    {
        int max=T[0],temp,flag;
        map<int,int> c;
        for(auto e: T)
        {
            c[e]++;
            if(e>max)
                max=e;
        }
        for(int i=0;i<T.size();i++)
        {
            temp=T[i],flag=0;
            for(int j=temp+1;j<=max;j++)
            {
                if(c[j]>0)
                {
                    flag=1;
                    for(int k=i+1;k<T.size();k++)
                        if(T[k]>T[i])
                        {
                            T[i]=k-i;
                            break;
                        }
                    break;
                }
            }
            if(flag==0)
                T[i]=0;
            c[temp]--;
        }
        return T;    
    }
};
