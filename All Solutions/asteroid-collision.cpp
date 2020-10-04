class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) 
    {
        int i=1,cur=0;   
        while(i<a.size())
        {
            if(cur==-1||a[i]>0||(a[i]<0&&a[cur]<0))
                a[++cur]=a[i++];
            else
            {
                if(abs(a[cur])>abs(a[i]))
                    i++;
                else if(a[cur]>0&&abs(a[cur])==abs(a[i]))
                    cur--,i++;
                else if(cur>=0)
                {
                    cur--;
                    if(i+1==a.size()&&abs(a[i])==abs(a[cur+1]))
                        break;
                }
            }
        }
        a.resize(cur+1);
        return a;
    }
};
