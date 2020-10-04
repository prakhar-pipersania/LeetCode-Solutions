class WordDictionary {
public:
    /** Initialize your data structure here. */
    class Trie
    {
        public:
        vector<Trie*> x;
        Trie():x(26){}
        string word;
    };
    Trie *root;
    WordDictionary() {root=new Trie;}
    /** Adds a word into the data structure. */
    void addWord(string word) 
    {
        Trie *temp=root;
        for(int i=0;i<word.size();i++)
        {
            if(temp->x[word[i]-'a']==NULL)
                temp->x[word[i]-'a']= new Trie;
            temp=temp->x[word[i]-'a'];
            if(i+1==word.size())
                temp->word=word;
        }
    }
    /** Returns if the word is in the data structure. */
    void searchtrie(string word,Trie* temp,bool &v,int start)
    {
        if(temp->word.size()==word.size())
            v=true;
        else
        {
            for(int i=start;i<word.size()&&v==false;i++)
            {
                if(word[i]=='.')
                {
                    for(int j=0;j<26&&v==false;j++)
                        if(temp->x[j]!=NULL)
                            searchtrie(word,temp->x[j],v,i+1);
                }
                else
                {
                    if(temp->x[word[i]-'a']!=NULL)
                    {
                        temp=temp->x[word[i]-'a'];
                        if(temp->word.size()==word.size())
                            v=true;
                    }
                    else
                        break;
                }
            }
        }
    }
    bool search(string word) 
    {
        bool v=false;
        Trie *temp=root;
        searchtrie(word,temp,v,0);
        return v;   
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
 