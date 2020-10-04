class MinStack {
public:
    int tos;
    vector<int> stack;
    /** initialize your data structure here. */
    MinStack() 
    {
        tos=-1;    
    }
    void push(int x) 
    {
        stack.push_back(x),tos++;    
    }
    void pop() 
    {
        stack.pop_back(),tos--;
    }
    int top() 
    {
        return stack[tos];    
    }    
    int getMin() 
    {
        int temp,val=INT_MAX;
        for(temp=tos;temp>-1;temp--)
            if(stack[temp]<val)
                val=stack[temp];
        return val;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 