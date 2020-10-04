class Solution {
public:
    class Trie{
        public:
        vector<Trie*> x;
        Trie():x(26){}
        string word;
    };
    void word(Trie *root,string &s)
    {
        for(int i=0;i<26;i++)
            if(root->x[i]!=NULL&&root->x[i]->word.size()>0)
            {
                if(root->x[i]->word.size()>s.size())
                    s=root->x[i]->word;
                word(root->x[i],s);
            }
    }
    string longestWord(vector<string>& words) 
    {
        int i;
        string s;
        Trie *root=new Trie,*temp;
        for(auto e: words)
        {
            for(i=0,temp=root;i<e.size();i++)
            {
                if(temp->x[e[i]-'a']==NULL)
                    temp->x[e[i]-'a']=new Trie;
                temp=temp->x[e[i]-'a'];
                if(i+1==e.size())
                    temp->word=e;
            }
        }
        word(root,s);
        return s;
    }
};
