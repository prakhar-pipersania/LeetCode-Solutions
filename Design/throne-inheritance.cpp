class ThroneInheritance {
public:
    int alive=1;
    string king;
    unordered_set<string> dead;
    unordered_map<string,vector<string>> child;
    ThroneInheritance(string kingName)
    {
        king=kingName;
    }
    void birth(string p, string c) 
    {
        child[p].push_back(c);
        alive++;
    }
    void death(string name) 
    {
        dead.insert(name);
        alive--;
    }
    void makeinherit(vector<string> &x,string s)
    {
        if(dead.find(s)==end(dead))
            x.push_back(s);
        if(child.find(s)!=end(child))
            for(int i=0;i<child[s].size();i++)
                makeinherit(x,child[s][i]);
    }
    vector<string> getInheritanceOrder() 
    {
        vector<string> x;
        x.reserve(alive);
        makeinherit(x,king);
        return x;
    }
};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */
 