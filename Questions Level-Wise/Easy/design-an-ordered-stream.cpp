class OrderedStream {
public:
    int ptr,size=0;
    vector<string> x;
    OrderedStream(int n)
    {
        size=n,ptr=0,x.resize(n);
    }
    vector<string> cut(vector<string> &x, int start, int end) 
    {
        auto first=begin(x)+start;
        auto last=begin(x)+end+1;
        vector<string> vect(first,last);
        return vect;
    }
    vector<string> insert(int id, string value)
    {
        id--;
        int start=id,end=id;
        x[id]=value;
        if(ptr==id)
        {
            for(int i=id;i<size;i++)
            {
                if(x[i].size()>0)
                    end=i;
                else
                    break;
            }
            ptr=end+1;
            return cut(x,start,end);
        }
        return {};
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(id,value);
 */
 