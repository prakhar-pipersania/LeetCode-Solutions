class Solution {
public:
    bool validPalindrome(string s) 
    {
        int i=0,j=0;
        string temp,revs=s;
        reverse(revs.begin(),revs.end());
        if(s==revs)
            return true;
        while(s[i]==revs[j]&&i<s.size()&&j<s.size())
            i++,j++;
        if(s[i]!=revs[j])
        {
            s=temp=s.substr(0,i)+s.substr(i+1,s.size()-i+1);
            reverse(s.begin(),s.end());
            if(temp==s)
                return true;
            revs=temp=revs.substr(0,j)+revs.substr(j+1,revs.size()-j+1);
            reverse(revs.begin(),revs.end());
            if(temp==revs)
                return true;
        }
        return false;
    }
};
