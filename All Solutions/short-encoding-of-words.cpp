class Solution {
public:
    class Trie 
    {
        public:
        vector<Trie*> x;
        vector<short> s;
        Trie()  
        {
            x.resize(26);
            s.resize(26);
        }
        // void print()
        // {
        //     for(auto e : x)
        //         cout<<e<<" ";
        //     cout<<endl;
        //     for(auto e : s)
        //         cout<<e<<" ";
        //     cout<<endl<<endl;
        // }
    };
    void count(Trie *root,int &sum,int &c,int v)
    {
        for(int i=0;i<26;i++)
        {
            if(root->s[i]>1)
                count(root->x[i],sum,c,v+1);
            else if(root->s[i]==1)
                c++,sum+=v+1;
        }
    }
    int minimumLengthEncoding(vector<string>& words) 
    {
        int sum=0,c=0;
        Trie *temp,*root=new Trie;
        temp=root;
        for(int i=0;i<words.size();i++)
        {
            root=temp;
            for(int j=words[i].size()-1;j>=0;j--)
            {
                short pos=words[i][j]-'a';
                if(root->x[pos]==NULL)
                    root->x[pos]=new Trie;
                if(j+1>root->s[pos])
                    root->s[pos]=j+1;
                root=root->x[pos];
            }
            //temp->print();
        }
        count(temp,sum,c,0);
        return (sum+c);    
    }
};