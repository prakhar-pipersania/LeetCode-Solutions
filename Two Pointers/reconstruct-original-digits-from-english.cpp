class Solution {
public:
    string originalDigits(string s) 
    {
        vector<string> num={"zero","one","two","three","four","five","six","seven","eight","nine"};
        vector<char> ch={'z','o','w','t','u','v','x','s','g','i'};
        vector<int> pattern={0,8,6,7,4,2,5,9,3,1};
        vector<int> x(26);
        string res="";
        for(auto e: s)
            x[e-'a']++;
        for(int i=0;i<pattern.size();i++)
        {
            while(x[ch[pattern[i]]-'a']>0)
            {
                for(int j=0;j<num[pattern[i]].size();j++)
                    x[num[pattern[i]][j]-'a']--;
                res+='0'+pattern[i];
            }
        }
        sort(begin(res),end(res));
        return res;
    }
};
