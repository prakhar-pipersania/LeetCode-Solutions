class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) 
    {
        char ch;
        int len;
        map<char,int> x;
        x[keysPressed[0]]=releaseTimes[0];
        for(int i=1;i<keysPressed.size();i++)
            x[keysPressed[i]]=max(x[keysPressed[i]],releaseTimes[i]-releaseTimes[i-1]);
        for(auto e: x)
            if(e.second>=len)
                ch=e.first,len=e.second;
        return ch;
    }
};
