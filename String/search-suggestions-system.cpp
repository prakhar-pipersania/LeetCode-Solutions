class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) 
    {
        vector<vector<string>> a;
        vector<string> b;
        string s;
        a.reserve(searchWord.size());
        sort(products.begin(),products.end());
        for(int i=0;i<searchWord.size();i++)
        {
            s=searchWord.substr(0,i+1);
            for(int j=0;j<products.size();j++)
            {
                if(products[j].size()>=s.size()&&s==products[j].substr(0,i+1))
                    b.push_back(products[j]);
                if(b.size()>2)
                    break;
            }
            a.push_back(b);
            b.resize(0);
        }
        return a;
    }
};
