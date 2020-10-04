class Solution {
public:
    unordered_map<string,string> x;
    string a="0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) 
    {
        string s="";
        while(s.size()<5)
            s+=a[rand()%62];
        x[s]=longUrl;
        return s;
    }
    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) 
    {
        return x[shortUrl];    
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
