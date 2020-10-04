class StreamChecker {
public:
    class Trie {
        public:
        vector<Trie*> x;
        Trie():x(26){}
        bool present=false;
    };
    Trie *root=NULL;
    int max=0;
    string s;
    StreamChecker(vector<string>& words) 
    {
        int i;
        root=new Trie;
        Trie *temp;
        for(auto e: words)
        {
            for(i=e.size()-1,temp=root;i>=0;i--)
            {
                if(temp->x[e[i]-'a']==NULL)
                    temp->x[e[i]-'a']=new Trie;
                temp=temp->x[e[i]-'a'];
                if(i==0)
                    temp->present=true;
            }
            if(e.size()>max)
                max=e.size();
        }
    }
    bool query(char letter) 
    {
        Trie *temp=root;
        s.size()<max?s+=letter:s=s.substr(1,s.size()-1)+letter;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(temp->x[s[i]-'a']!=NULL)
            {
                temp=temp->x[s[i]-'a'];
                if(temp->present==true)
                    return true;
            }
            else
                break;
        }
        return false;
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */
 