class AuthenticationManager {
public:
    int ttl=0;
    map<string,int> y;
    AuthenticationManager(int timeToLive) {
        ttl=timeToLive;
    }
    
    void generate(string tokenId, int currentTime) 
    {
        y[tokenId]=currentTime+ttl;
        for(auto e=begin(y);e!=end(y);)
        {
            if(e->second<=currentTime)
                y.erase(e->first);
            if(e!=end(y))
                e++;
        }
    }
    
    void renew(string tokenId, int currentTime) {
        if(y.find(tokenId)!=end(y)&&y[tokenId]>currentTime)
            y[tokenId]=currentTime+ttl;
    }
    
    int countUnexpiredTokens(int currentTime) 
    {
        for(int i=0;i<2;i++)
        {
            for(auto e=begin(y);e!=end(y);)
            {
                if(e->second<=currentTime)
                    y.erase(e->first);
                if(e!=end(y))
                    e++;
            }
        }
        return y.size();
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */