class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        map<string,int> a;
        multimap<int,string,greater<>> b;
        for(int i=0;i<words.size();i++)
            a[words[i]]++;
        words.resize(0);
        for(auto e: a)
            b.insert({e.second,e.first});
        for(auto e: b)
        {
            words.push_back(e.second);
            if(words.size()==k)
                break;
        }
        return words;    
    }
};
