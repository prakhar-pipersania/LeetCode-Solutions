class Solution {
public:
    string getHint(string secret, string guess) 
    {
        vector<int> x(10),y(10);
        int bulls=0,cows=0;
        for(int i=0;i<secret.size();i++)
        {
            x[secret[i]-'0']++,y[guess[i]-'0']++;
            if(secret[i]==guess[i])
                bulls++;
        }
        for(int i=0;i<10;i++)
            cows+=min(x[i],y[i]);
        cows-=bulls;
        return (to_string(bulls)+"A"+to_string(cows)+"B");
    }
};
