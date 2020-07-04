class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2)     {
        int x=10000,min=INT_MAX;
        unordered_map<string,int> a;
        for(int i=0;i<list1.size();i++)
            a[list1[i]]+=i+x;
        for(int i=0;i<list2.size();i++)
            a[list2[i]]+=i+x;
        x*=2,list1.resize(0);
        for(auto e: a)
            if(e.second>=x&&e.second<min)
                min=e.second;
        for(auto e: a)
            if(e.second==min)
                list1.push_back(e.first);
        return list1;
    }
};
