class BrowserHistory {
public:
    int top=0,max=0;
    vector<string> x;
    BrowserHistory(string homepage) 
    {
        x.push_back(homepage);
    }
    void visit(string url) 
    {
        max=top=top+1;
        x.resize(top);
        x.push_back(url);
    }
    string back(int steps) 
    {
        while(top>0&&steps>0)
            top--,steps--;
        return x[top];
    }
    string forward(int steps) 
    {
        while(top<max&&steps>0)
            top++,steps--;
        return x[top];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
 