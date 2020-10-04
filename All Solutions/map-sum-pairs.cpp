class MapSum {
public:
    class Trie {
        public:
        vector<Trie*> x;
        Trie():x(26){}
        int val=0;
    };
    Trie *root=NULL;
    /** Initialize your data structure here. */
    MapSum() {root=new Trie;}
    void insert(string key, int val) 
    {
        Trie *temp=root;
        for(int i=0;i<key.size();i++)
        {
            if(temp->x[key[i]-'a']==NULL)
                temp->x[key[i]-'a']=new Trie;
            temp=temp->x[key[i]-'a'];
            if(i+1==key.size())
                temp->val=val;
        }
    }
    void find_childsum(Trie* root,int &s)
    {
        for(int i=0;i<26;i++)
            if(root->x[i]!=NULL)
                find_childsum(root->x[i],s),s+=root->x[i]->val;
    }
    int sum(string prefix) 
    {
        int s=0,f=0;
        Trie *temp=root;
        for(int i=0;i<prefix.size();i++)
        {
            if(temp->x[prefix[i]-'a']!=NULL)
            {
                temp=temp->x[prefix[i]-'a'];
                if(i+1==prefix.size())
                    s+=temp->val,f=1;
            }
            else
                break;
        }
        if(f==1)
            find_childsum(temp,s);
        return s;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
 