class MyQueue {
public:
    int top,topt;
    vector<int> queue;
    vector<int> t;
    /** Initialize your data structure here. */
    MyQueue() 
    {
        top=topt=-1;
    }
    /** Push element x to the back of queue. */
    void push(int x) 
    {
        top++;
        queue.push_back(x);
    }
    /** Removes the element from in front of queue and returns that element. */
    int pop() 
    {
        while(top>0)
            t.push_back(queue[top]),top--,topt++;
        int val=queue[top];
        queue.resize(0),top=-1;
        while(topt>=0)
            queue.push_back(t[topt]),top++,topt--;
        t.resize(0),topt=-1;
        return val;
    }
    /** Get the front element. */
    int peek() 
    {
        int temp=top;
        while(temp>0)
            temp--;
        return queue[temp];
    }
    /** Returns whether the queue is empty. */
    bool empty() 
    {
        if(top==-1)
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
 