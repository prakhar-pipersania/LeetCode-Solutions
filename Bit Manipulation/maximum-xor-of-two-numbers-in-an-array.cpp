class Solution {
public:
    class Trie{
        public:
        vector<Trie*> x;
        Trie():x(2){}
    };
    void findmax(int cur,int &val,Trie *temp,Trie *temp2,vector<int> a)
    {
        int t=0;
        for(int i=31,j=0;i>=0;i--,j++)
            t+=a[i]*pow(2,j);
        if(cur==32&&t>val)
            val=t;
        else if(t+pow(2,32-cur)-1>=val)
        {
            int flag=0;
            if(temp->x[0]!=NULL&&temp2->x[1]!=NULL)
                flag=a[cur]=1,findmax(cur+1,val,temp->x[0],temp2->x[1],a),a[cur]=0;
            if(temp->x[1]!=NULL&&temp2->x[0]!=NULL)
                flag=a[cur]=1,findmax(cur+1,val,temp->x[1],temp2->x[0],a),a[cur]=0;
            if(flag==0)
            {
                if(temp->x[0]==NULL)
                {
                    if(temp2->x[0]==NULL)
                        findmax(cur+1,val,temp->x[1],temp2->x[1],a);
                    else if(temp2->x[1]==NULL)
                        findmax(cur+1,val,temp->x[1],temp2->x[0],a);
                    else
                        findmax(cur+1,val,temp->x[1],temp2->x[0],a),findmax(cur+1,val,temp->x[1],temp2->x[1],a);
                }
                if(temp->x[1]==NULL)
                {
                    if(temp2->x[0]==NULL)
                        findmax(cur+1,val,temp->x[0],temp2->x[1],a);
                    else if(temp2->x[1]==NULL)
                        findmax(cur+1,val,temp->x[0],temp2->x[0],a);
                    else
                        findmax(cur+1,val,temp->x[0],temp2->x[0],a),findmax(cur+1,val,temp->x[1],temp2->x[1],a);
                }
            }
        }
    }
    int findMaximumXOR(vector<int>& nums) 
    {
        int i,j,val=0;
        if(nums.size()<2)
            return val;
        vector<int> a(32);
        Trie *root=new Trie,*temp;
        for(i=0;i<nums.size();i++)
        {
            for(j=31;nums[i]>0;nums[i]/=2,j--)
                a[j]=nums[i]%2;
            for(j=0,temp=root;j<32;j++)
            {
                if(temp->x[a[j]]==NULL)
                    temp->x[a[j]]=new Trie;
                temp=temp->x[a[j]];
            }
            fill(begin(a),end(a),0);
        }
        findmax(0,val,root,root,a);
        return val;
    }
};
