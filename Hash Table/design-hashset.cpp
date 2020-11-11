class MyHashSet {
public:
    vector<int> x;
    /** Initialize your data structure here. */
    MyHashSet() 
    {
        x.resize(1000001);
        fill(begin(x),end(x),-1);
    }
    
    void add(int key) 
    {
        x[key]=1;    
    }
    
    void remove(int key) 
    {
        x[key]=-1; 
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) 
    {
        if(x[key]==-1)
            return false;
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
 