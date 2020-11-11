class Solution {
public:
    int solve(vector<int> &tokens, int P,int par)
    {
        int s=0,e=tokens.size()-1;
        for(int i=0;i<par;i++)
        {
            if(P>=tokens[i])
                P=P+tokens[e-i]-tokens[i];
            else
                return 0;
        }
        for(int i=par;i<=e-par;i++)
        {
            if(P>=tokens[i])
                P-=tokens[i],s++;
            else
                break;
        }
        return s;
    }
    int bagOfTokensScore(vector<int>& tokens, int P) 
    {
        if(!tokens.size())
            return 0;
        int osc=0,nsc=0;
        sort(begin(tokens),end(tokens));
        for(int i=0;i<(tokens.size()/2)+1;i++)
        {
            nsc=solve(tokens,P,i);
            if(nsc<osc)
                return osc;
            else 
                osc=nsc;
        }
        return nsc;
    }
};
