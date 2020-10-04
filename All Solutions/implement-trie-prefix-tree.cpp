class Trie {
public:
    /** Initialize your data structure here. */
    class T {
        public:
        vector<T*> x;
        T():x(26){}
        bool present=false;
    };
    T *root;
    Trie() {root=new T;}
    /** Inserts a word into the trie. */
    void insert(string word) 
    {
        T *temp=root;
        for(int i=0;i<word.size();i++)
        {
            if(temp->x[word[i]-'a']==NULL)
                temp->x[word[i]-'a']=new T;
            temp=temp->x[word[i]-'a'];
            if(i+1==word.size())
                temp->present=true;
        }
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) 
    {
        T *temp=root;
        for(int i=0;i<word.size();i++)
        {
            if(temp->x[word[i]-'a']!=NULL)
            {
                temp=temp->x[word[i]-'a'];
                if(i+1==word.size()&&temp->present==true)
                    return true;
            }
            else
                break;
        }   
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) 
    {
        T *temp=root;
        for(int i=0;i<prefix.size();i++)
        {
            if(temp->x[prefix[i]-'a']!=NULL)
            {
                temp=temp->x[prefix[i]-'a'];
                if(i+1==prefix.size())
                    return true;
            }
            else
                break;
        }   
        return false;  
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
 