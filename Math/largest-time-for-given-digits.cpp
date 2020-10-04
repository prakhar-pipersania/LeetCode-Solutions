class Solution {
public:
    void gentime(string &x,vector<int> A,int cur,string s)
    {
        char c;
        int temp;
        if(cur==4&&s>x)
            x=s;
        else
        {
            for(int i=0;i<A.size();i++)
                if(A[i]!=-1)
                {
                    if(cur==0&&A[i]<3)
                        temp=A[i],A[i]=-1,c='0'+temp,gentime(x,A,cur+1,s+c),A[i]=temp;
                    else if(cur==1)
                    {
                        if(s[cur-1]=='2'&&A[i]<4)
                            temp=A[i],A[i]=-1,c='0'+temp,gentime(x,A,cur+1,s+c),A[i]=temp;
                        else if(s[cur-1]!='2')
                            temp=A[i],A[i]=-1,c='0'+temp,gentime(x,A,cur+1,s+c),A[i]=temp;
                    }
                    else if(cur==2&&A[i]<6)
                        temp=A[i],A[i]=-1,c='0'+temp,gentime(x,A,cur+1,s+c),A[i]=temp;
                    else if(cur==3)
                        temp=A[i],A[i]=-1,c='0'+temp,gentime(x,A,cur+1,s+c),A[i]=temp;
                }
        }
    }
    string largestTimeFromDigits(vector<int>& A) 
    {
        string x="";
        gentime(x,A,0,x);
        if(x.size()>0)
            x=x.substr(0,2)+":"+x.substr(2,2);
        return x;
    }
};
