class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) 
    {
        unordered_map<string,int> x;
        for(int i=0;i<names.size();i++)
        {
            if(x.find(names[i])==end(x))
                x[names[i]]++;
            else
            {
                while(x.find(names[i]+"("+to_string(x[names[i]])+")")!=end(x))
                    x[names[i]]++;
                names[i]=names[i]+"("+to_string(x[names[i]])+")";
                x[names[i]+"("+to_string(x[names[i]])+")"]++;
            }
        }
        return names;
    }
};