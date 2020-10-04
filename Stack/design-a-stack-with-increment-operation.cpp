class CustomStack {
public:
    int top=0;
    vector<int> a;
    CustomStack(int maxSize) 
    {
        a.resize(maxSize);    
    }
    void push(int x) 
    {
        if(top<a.size())
            a[top]=x,top++;
    }
    int pop() 
    {
        int val=-1;
        if(top>0)
            top--,val=a[top];
        return val;
    }
    void increment(int k, int val) 
    {
        int x=k-1;
        if(k>=top)
            x=top-1;
        while(k>0&&x>-1)
            a[x]+=val,k--,x--;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
 